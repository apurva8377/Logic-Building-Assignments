///////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.c
// Description :  Returns second maximum element from singly linear linked list.
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

int SecMaximum( PNODE first)
{
    int Max = 0, SecMax = 0;

    Max  = first->data;
    while(first != NULL)
    {
        if(first->data > Max )
        {
            Max = first->data;
        }
        else
        {
            SecMax = first->data;
        }

        first = first->next;
    }
    return SecMax;

}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,240);
    InsertFirst(&head,320);
    InsertFirst(&head,230);
    InsertFirst(&head,110);

    iRet = SecMaximum(head);

    printf("Second maximum element from singly linear linked list : %d\n",iRet);

    return 0;

}
