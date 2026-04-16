// Write a program which returns addition of all element from singly linear linked list.
/*

    Input linked list : |10|->|20|->|30|->|40|
    Output : 100
*/

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.c
// Description :  Returns addition of all element from singly linear linked list.
// Autor       :  Apurva Vilas Shinde
// Date        :  15/04/2026
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

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

int Addition(PNODE first)
{
    int iSum = 0;

    while(first != NULL)
    {
        iSum = iSum + first->data;
        first = first->next;
    }

    return iSum;
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }

    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;
    int iRet = 0, iValue = 0;

    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    printf("Linked List : \n");
    Display(head);

    iRet = Addition(head);

    printf("Addition of the elements of the LinkedList is : %d\n",iRet);
    
    return 0;
}