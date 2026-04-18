// Write a program which reverse each element of singly linked list.
/*

    Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
    Output : |11|->|82|->|71|->|14|->|6|->|98|

*/

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c
// Description :  Reverse each element of singly linked list.
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

// Reverse Digits of a number
int ReverseDigits(int no)
{
    int rev = 0;
    int Digit = 0;

    while(no != 0)
    {
        Digit = no % 10;
        rev = (rev * 10) + Digit;
        no = no / 10;
    }

    return rev;
}

// Reverse each element in the linkedList
void ReverseElements(PNODE first)
{
    while(first != NULL)
    {
        first->data = ReverseDigits(first->data);
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

    printf("The LinkedList before reversing the elements : \n");
    Display(head);

    ReverseElements(head);

    printf("The LinkedList after reversing the elements : \n");
    Display(head);

    return 0;
}