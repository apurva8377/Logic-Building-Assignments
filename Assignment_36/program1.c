///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c
// Description :  Reverse each element of singly linked list.
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
void Reverse(PNODE first)
{
    int iDigit = 0, iRev = 0;

    while(first != NULL)
    {
        iDigit = 0;
        iRev = 0;
        while((first)->data != 0)
        {
            iDigit = (first)->data % 10;
            iRev = iRev * 10 + iDigit;
            first->data = (first)->data / 10;
        }
        printf("| %d |->",iRev);

        first = first->next;
    }

    printf("NUll\n");

}
int main()
{
    PNODE head = NULL;

    InsertFirst(&head,89);
    InsertFirst(&head,6);
    InsertFirst(&head,41);
    InsertFirst(&head,17);
    InsertFirst(&head,28);
    InsertFirst(&head,11);

    Display(head);

    Reverse(head);

    return 0;

}
