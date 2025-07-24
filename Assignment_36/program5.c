///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Display largest digits of all element from singly linear linked list.
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

void DisplayLarge( PNODE first)
{
    int large = 0, iDigit = 0;
    while(first != NULL)
    {
        large = 0;
        iDigit = 0;
        while((first)->data != 0)
        {
            iDigit = (first)->data  % 10;
            if(iDigit > large)
            {
                large = iDigit;
            }
            first->data = (first)->data / 10;
        }

        printf(" %d ",large );

        first = first->next;

    }

    printf("\n");
}


int main()
{
    PNODE head = NULL;

    InsertFirst(&head,419);
    InsertFirst(&head,532);
    InsertFirst(&head,250);
    InsertFirst(&head,11);

    DisplayLarge(head);

    return 0; 
}
