///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Write application which accept file name from user and one string from user . write taht string at the end of file.                
// Autor       :  Apurva Vilas Shinde.
// Date        :  14/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : Demo.txt
            Hello World
    Output : Write Hello world at end of Demo.txt file

*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
     char fName[50] = {'\0'};
     int fd = 0, iRet;
     char  Buffer[] = " Hello world";
     char Buffer2[BUFFER_SIZE] = {'\0'};

     printf("Enter file name \n");
     scanf("%s",fName);

     fd = open(fName,O_RDWR | O_APPEND);

     if(fd == -1)
     {
          printf("Unable to open file\n");
     }
     else
     {
          printf("File opened\n");

          write(fd, Buffer,strlen(Buffer));

          printf("File content updated at the end of file");

          printf("\n");
          close(fd);
     }

     return 0;
     
}