// Write a program which display product of all digits of all element from singly linear linked list. (Don’t consider 0)

/*

    Input linked list : |11|->|20|->|32|->|41|
    Output : 1 2 6 4

*/

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.c
// Description :  Display product of all digits of all element from singly linear linked list.
// Autor       :  Apurva Vilas Shinde
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

//Display linkeList
void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

// Product of digits (ignore 0)
int ProductDigits(int no)
{
    int Prod = 1;
    int Digit = 0;

    while(no != 0)
    {
        Digit = no % 10;
        if(Digit != 0)
        {
            Prod = Prod * Digit;
        }
        no = no / 10;
    }

    return Prod;
}

// Displays product of digits of each element
void DisplayProduct(PNODE first)
{
    printf("Product of digit of each element : \n");

    while(first != NULL)
    {
        printf("%d\n", ProductDigits(first->data));
        first = first->next;
    }

    printf("\n");
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,11);
    InsertFirst(&head,20);
    InsertFirst(&head,32);
    InsertFirst(&head,41);

    printf("Linked List:\n");
    Display(head);

    DisplayProduct(head);

    return 0;
}