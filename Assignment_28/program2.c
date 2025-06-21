///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Write application which accept file name from user open that file in read mode.                
// Autor       :  Apurva Vilas Shinde.
// Date        :  14/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : Demo.txt
    Output : File opened successfully.

*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char fName[50] = {'\0'};
    int fd = 0;

    printf("Enter file name to open in read mode\n");
    scanf("%s",fName);

    fd = open(fName, O_RDONLY);

    if(fd < 0)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File open successfully : %d\n",fd);
    }

    close(fd);

    return 0;

}