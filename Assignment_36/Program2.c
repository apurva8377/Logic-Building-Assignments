// Write a program which display all palindrome elements of singly linked list.
/*

    Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
    Output : 11 6 414

*/

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c
// Description :  Display all palindrome elements of singly linked list.
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

int ReverseNumber(int no)
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

// Check pallindrome elements
bool CheckPallindrome(int no)
{
    if(no == ReverseNumber(no))
    {
        return true;
    }
    else 
    {
        return false;
    }
}

// Display pallindrome elements
void DisplayPalindrome(PNODE first)
{
    printf("Pallindrome elements are : \n");

    while(first != NULL)
    {
        if(CheckPallindrome(first->data) == true)
        {
            printf("%d\n",first->data);
        }
        first = first->next;
    }

    printf("\n");
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,11);
    InsertFirst(&head,28);
    InsertFirst(&head,17);
    InsertFirst(&head,414);
    InsertFirst(&head,6);
    InsertFirst(&head,89);

    printf("Linked List:\n");
    Display(head);

    DisplayPalindrome(head);

    return 0;
}