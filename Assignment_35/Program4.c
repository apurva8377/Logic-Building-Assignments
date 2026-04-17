// Write a program which return second maximum element from singly linear linked list.
/*

    Input linked list : |110|->|230|->|320|->|240|
    Output : 240
*/

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Returns second maximum element from singly linear linked list.
// Autor       :  Apurva Vials Shinde
// Date        :  17/04/2025
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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

// Fine Second Maximum
int SecondMax(PNODE first)
{
    int Max = INT_MIN;
    int SecondMax = INT_MIN;

    while(first != NULL)
    {
        if(first->data > Max)
        {
            SecondMax = Max;
            Max = first->data;
        }
        else if(first->data > SecondMax && first->data != Max)
        {
            SecondMax = first->data;
        }
        first = first->next;
    }

    return SecondMax;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,110);
    InsertFirst(&head,230);
    InsertFirst(&head,320);
    InsertFirst(&head,240);
    InsertFirst(&head,117);
    InsertFirst(&head,450);

    printf("The elements in the LinkedList are : \n");
    Display(head);

    iRet = SecondMax(head);

    printf("Second maximum elements in the LinkedList is : %d\n",iRet);

    return 0;
}

