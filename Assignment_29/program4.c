///////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.c
// Description :  Write a program which accepts file name and one charcter from user and count number of occurences of that character from that file
// Autor       :  Apurva Vilas Shinde.
// Date        :  16/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : Demo.txt   'M
    Output : Frequency of M is 7
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


#define BUFFER_SIZE 1024

int CountChar(char fName[] , char ch )
{
    int fd = 0;
    int iCount = 0;
    int iCnt = 0;
    int iRet = 0;
 
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(fName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }

    else 
    {
        printf("File is successfully opened with fd : %d\n",fd);

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
          
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if(Buffer[iCnt] == ch)
                {
                    iCount++;
                }
                
            }
            memset(Buffer,'\0',BUFFER_SIZE);
           
        }
                
        close(fd);
    }

    return iCount;
}

int main()
{
    char FileName[30] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter file name \n");
    scanf("%s",FileName);

    printf("Enter Character to count its frequency \n");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);

    printf("Frequency of %c is : %d\n",cValue,iRet);
    return 0;
}