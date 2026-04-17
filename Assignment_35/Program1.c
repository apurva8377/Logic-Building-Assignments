// Write a program which displays all elements which are perfect from singly linear linked list
/*

    Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
    Output : 6 , 28

*/
///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c
// Description :  Returns addition of all elements which are perfect from singly linear linked list.
// Autor       :  Apurva Vials Shinde
// Date        :  16/04/2025
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

int IsPerfect(int no)
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 1; iCnt<= no/2; iCnt++)
    {
        if(no % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == no)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void DisplayPerfect(PNODE first)
{
    while(first != NULL)
    {
        if(IsPerfect(first->data) == true)
        {
            printf("%d is a perfect number\n",first->data);
        }
        else
        {
            printf("%d is a not a perfect number\n",first->data);
        }

        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,11);
    InsertFirst(&head,28);
    InsertFirst(&head,17);
    InsertFirst(&head,41);
    InsertFirst(&head,6);
    InsertFirst(&head,89);

    printf("The elements in the LinkedList are : \n");
    Display(head);

    DisplayPerfect(head);

    return 0;
}

