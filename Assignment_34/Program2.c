// Write a program which search last occurrence of particular element from singly linear linked list.
// Function should return position at which element is found.

/*
    Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
    Input element : 30
    Output : 6
*/


///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Search last occurrence of particular element from singly linear linked list.
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

// function to search last occurrance
int SearchLastOcc(PNODE first, int no)
{
    int iCount = 1, iPos = -1;

    while(first != NULL)
    {
        if (first->data == no)
        {
            iPos = iCount;    // update the position every time when no found   
        }

        first = first->next;
        iCount++;    
    }

    return iPos;   // -1 if element not found
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
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    printf("Linked List : \n");
    Display(head);

    printf("Enter the element to search : \n");
    scanf("%d",&iValue);

    iRet = SearchLastOcc(head, iValue);

    if(iRet == -1)
    {
        printf("Element is not found\n");
    }
    else
    {
        printf("Last occurance of %d is at position %d\n",iValue,iRet);
    }

    return 0;
}