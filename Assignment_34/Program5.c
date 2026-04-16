// Write a program which return smallest element from singly linear linked list.
/*

    Input linked list : |110|->|230|->|20|->|240|->|640|
    Output : 20
*/

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.c
// Description :  Returns smallest element from singly linear linked list.
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

int Minimum(PNODE first)
{
    int Min = 0;

    Min = first->data;

    while(first != NULL)
    {
        if(first->data < Min)
        {
            Min = first->data;
        }
        first = first->next;
    }

    return Min;
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
    InsertFirst(&head,80);
    InsertFirst(&head,5);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    printf("Linked List : \n");
    Display(head);

    iRet = Minimum(head);

    printf("Minimum number from the LinkedList is : %d\n",iRet);
        
    return 0;
}