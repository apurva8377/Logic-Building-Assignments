// Write a program which display addition of digits of element from singly linear linked list.
/*
    Input linked list : |110|->|230|->|20|->|240|->|640|
    Output :2 5 2 6 10
*/


///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Returns addition of digits of element from singly linear linked list.
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

// Function to write sum of digits od a number
int SumDigits(int no)
{
    int Sum = 0;
    int Digit = 0;

    while(no != 0)
    {
        Digit = no % 10;
        
        Sum = Sum + Digit;

        no = no / 10;
    }

    return Sum;
}

// Display Addition of digits of each element
void DisplaySumDigit(PNODE first)
{
    printf("Addition of digits of each element : \n");

    while(first != NULL)
    {
        printf("%d\n",SumDigits(first->data));
        first = first->next;
    }
    printf("\n");
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,110);
    InsertFirst(&head,230);
    InsertFirst(&head,20);
    InsertFirst(&head,240);
    InsertFirst(&head,640);
    InsertFirst(&head,450);

    printf("The elements in the LinkedList are : \n");
    Display(head);

    DisplaySumDigit(head);

    return 0;
}

