///////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.c
// Description :  Write application which accept file name from user and display size of file         
// Autor       :  Apurva Vilas Shinde.
// Date        :  14/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : Demo.txt
    Output : File size is 56 bytes 
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
     int iSum = 0;
     char  Buffer[BUFFER_SIZE] = {'\0'};

     printf("Enter file name \n");
     scanf("%s",fName);

     fd = open(fName,O_RDONLY);

     if(fd == -1)
     {
          printf("Unable to open file\n");
     }
     else
     {
          printf("File opened\n");

          while(iRet = read(fd, Buffer,sizeof(BUFFER_SIZE) != 0))
          {
            iSum = iSum + iRet;
              
          }
          printf("File size is %d bytes \n",iSum);

          close(fd);
     }

     return 0;
     
}