///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Returns addition of digits of element from singly linear linked list.
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

void SumDigit( PNODE first)
{
    int iDigit = 0, iSum = 0;

    while(first != NULL)
    {   
        iSum = 0;
        while(first->data != 0)
        {   
            iDigit = (first)->data % 10;
            iSum = iSum + iDigit;
            first->data= (first)->data / 10;

        }

        printf("%d\n",iSum);
        first = first->next;

    }

}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,240);
    InsertFirst(&head,320);
    InsertFirst(&head,230);
    InsertFirst(&head,110);

    SumDigit(head);

    return 0;

}
