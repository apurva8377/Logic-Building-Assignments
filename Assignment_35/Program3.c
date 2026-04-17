// Write a program which returns addition of all even element from singly linear linked list.
/*

    Input linked list : |11|->|20|->|32|->|41|
    Output : 52
*/

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Returns addition of all even element from singly linear linked list.
// Autor       :  Apurva Vials Shinde
// Date        :  17/04/2025
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int AdditionEven(PNODE first)
{
    int iSum = 0;

    while(first != NULL)
    {
        if((first->data % 2) == 0)
        {
            iSum = iSum + first->data;
        }

        first = first->next;
    }

    return iSum;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,89);
    InsertFirst(&head,22);
    InsertFirst(&head,41);
    InsertFirst(&head,17);
    InsertFirst(&head,20);
    InsertFirst(&head,11);

    printf("The elements in the LinkedList are : \n");
    Display(head);

    iRet = AdditionEven(head);

    printf("Addition of even elements in the LinkedList is : %d\n",iRet);

    return 0;
}

