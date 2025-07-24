///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.c
// Description :  Returns addition of all even element from singly linear linked list.
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

int AdditionEven( PNODE first)
{
    int SumEven = 0;
    while(first != NULL)
    {
        if(((first)->data % 2) == 0 )
        {
            SumEven = SumEven + first->data;
        }
        first = first->next;
    }

    return SumEven;

}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,41);
    InsertFirst(&head,32);
    InsertFirst(&head,20);
    InsertFirst(&head,11);

    iRet = AdditionEven(head);

    printf("Addition of even elmentsfrom Singly LL is : %d\n",iRet);

    return 0;
}
