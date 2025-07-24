///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Search last occurrence of particular element from singly linear linked list.
// Autor       :  Apurva Vilas Shinde
// Date        :  30/05/2025
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

    newn = (PNODE)malloc (sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
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
    while(first  != NULL)
    {
        printf (" %d ",first->data);
        first = first->next;
    }

    printf("\n");
}

int SearchLastOcc( PNODE first, int no )
{
    int iCount = 0;
    while(first != NULL)
    {
        iCount++; 
        if(first->data == no)
        {
            iCount++;
        }
        first = first->next;
    }
    return iCount;

}


int main()
{
    PNODE head = NULL;
    int iRet = 0;
    
    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);
    Display(head);

    iRet = SearchLastOcc(head,30);
    printf("Last occureance of 30 element in LL is %d\n",iRet);

    return 0;
}