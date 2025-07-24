
///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.c
// Description :  Display product of all digits of all element from singly linear linked list.
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

    newn = (PNODE) malloc(sizeof(NODE));
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

void DisplayProduct( PNODE first)
{
    int sum = 1, iDigit = 0;
    while(first != NULL)
    {
        sum = 1;
        iDigit = 0;
        while((first)->data != 0)
        {
            iDigit = (first)->data  % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            sum = sum * iDigit;
            first->data = (first)->data / 10;
        }

        printf(" %d ",sum );

        first = first->next;

    }

    printf("\n");
}


int main()
{
    PNODE head = NULL;

    InsertFirst(&head,41);
    InsertFirst(&head,32);
    InsertFirst(&head,20);
    InsertFirst(&head,11);

    DisplayProduct(head);

    return 0; 
}
