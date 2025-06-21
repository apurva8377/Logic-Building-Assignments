///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.c
// Description :  Write application which accept file name from user and read all data from that file and display contents on screen.                
// Autor       :  Apurva Vilas Shinde.
// Date        :  14/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
     Input : Demo.txt
     Output : Display all data of file

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
               write(1,Buffer,iRet);
               memset(Buffer,'\0',sizeof(BUFFER_SIZE));
          }
          printf("\n");

          close(fd);
     }

     return 0;
     
}