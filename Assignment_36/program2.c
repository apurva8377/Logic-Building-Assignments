///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Display all palindrome elements of singly linked list.
// Autor       :  Apurva Vilas Shinde
// Date        :  30/05/2025
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, int no)
{  
    PNODE newn = NULL;

    newn = (PNODE) malloc (sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    while(first  != NULL)
    {
        printf (" %d ",first->data);
        first = first->next;
    }

    printf("\n");
}
void DisplayPallindrome(PNODE first)
{
    PNODE temp = NULL;
    int iDigit = 0, iRev = 0;

    PNODE newn = NULL;
    newn = (PNODE) malloc(sizeof(NODE));


    while(first != NULL)
    { 
        newn->data = first->data;
        newn->next = first->next;

        iDigit = 0;
        iRev = 0;
        
        while(newn->data != 0)
        {
            iDigit = (newn)->data % 10;
            iRev = iRev * 10 + iDigit;
            newn->data = (newn)->data / 10;
        }
       
        if(first->data == iRev)
        {
                printf("| %d |->",first->data);
        }

        first = first->next;
    }

    printf("NUll\n");

}
int main()
{
    PNODE head = NULL;

    InsertFirst(&head,89);
    InsertFirst(&head,6);
    InsertFirst(&head,414);
    InsertFirst(&head,17);
    InsertFirst(&head,28);
    InsertFirst(&head,11);

    Display(head);

    DisplayPallindrome(head);

    return 0;

}
