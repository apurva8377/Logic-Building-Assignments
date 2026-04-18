// Write a program which display smallest digits of all element from singly linear linked list.
/*

Input linked list : |11|->|250|->|532|->|415|
Output : 1 0 2 1

*/


///////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.c
// Description :  Display smallest digits of all element from singly linear linked list.
// Autor       :  Apurva Vilas Shinde
// Date        :  17/04/2025
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

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else 
    {
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | ->",first->data);
        first = first -> next;
    }
    printf("Null\n");
}

// Finction to find smallest digit of a number
int SmallestDigit(int no)
{
    int iDigit = 0;
    int MinDigit = 9;

    if(no < 0)     // Filter
    {
        no = -no;
    }

    while(no != 0)
    {
        iDigit = no % 10;

        if(iDigit < MinDigit)
        {
            MinDigit = iDigit;
        }

        no = no / 10;
    }

    return MinDigit;
}

void DisplaySmallestDigit(PNODE first)
{
    int iRet = 0;

    while(first != NULL)
    {
        iRet = SmallestDigit(first->data);
        printf("Smallest digit from %d is %d\n",first->data,iRet);
        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;

    InsertLast(&head,11);
    InsertLast(&head,250);
    InsertLast(&head,532);
    InsertLast(&head,415);

    Display(head);

    printf("Smallest digits are : \n");
    DisplaySmallestDigit(head);

    return 0;
}

