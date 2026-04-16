// Write a program which search first occurrence of particular element from singly linear linked list.
// Function should return position at which element is found.
/*

    Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
    Input element : 30
    Output : 3

*/

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c
// Description :  Search first occurrence of particular element from singly linear linked list.
// Autor       :  Apurva Vials Shinde
// Date        :  14/04/2025
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

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

int SearchFirstOcc(PNODE first, int no)
{
    int iCount = 0;

    while(first != NULL)
    {
        if(first->data == no)
        {
            return iCount;      // found -> return position
        }

        first = first->next;
        iCount++;
    }

    return -1;   // Not found
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

    printf("The Singly Linear LinkedList is : \n");
    Display(head);

    printf("Enter the number theat you want to search : \n");
    scanf("%d",&iValue);

    iRet = SearchFirstOcc(head,iValue);

    if(iRet == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("First occurrence of %d element is at position %d\n", iValue, iRet);
    }
    
    return 0;
}