///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Write a program which accepts file name from user and count number of small character from that file.               
// Autor       :  Apurva Vilas Shinde.
// Date        :  15/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : DEmo.txt
    Output : Number of small charcetrs are 21
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


#define BUFFER_SIZE 1024

int CountSmall( char fName [])
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
                if((Buffer[iCnt] >= 'a') && (Buffer[iCnt] <= 'z'))
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
    int iRet = 0;

    printf("Enter file name \n");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of small character are %d \n",iRet);
    return 0;
}