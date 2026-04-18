// Write a program which display largest digits of all element from singly linear linked list
/*

    Input linked list : |11|->|250|->|532|->|419|
    Output : 1 5 5 9
*/


///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Display largest digits of all element from singly linear linked list.
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

// Finction to find largest digit of a number
int LargestDigit(int no)
{
    int iDigit = 0;
    int MaxDigit = 0;

    if(no < 0)     // Filter
    {
        no = -no;
    }

    while(no != 0)
    {
        iDigit = no % 10;

        if(iDigit > MaxDigit)
        {
            MaxDigit = iDigit;
        }

        no = no / 10;
    }

    return MaxDigit;
}

void DisplayLargestDigit(PNODE first)
{
    int iRet = 0;

    while(first != NULL)
    {
        iRet = LargestDigit(first->data);
        printf("Largest digit from %d is %d\n",first->data,iRet);
        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;

    InsertLast(&head,11);
    InsertLast(&head,250);
    InsertLast(&head,532);
    InsertLast(&head,419);

    Display(head);

    printf("Largest digits are : \n");
    DisplayLargestDigit(head);

    return 0;
}

