#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>


struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)      // CALL BY Address
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data =  no;
    newn -> next = NULL;

    if ( NULL == (*first))      // LL is empty
    {
        (*first) = newn;
    }
    else
    {
        newn -> next = (*first);
        (*first) = newn;
    }
    newn = NULL;
}

void Display(PNODE first)
{
    if ( NULL == first )
    {
        printf("LL is empty\n");
        return;
    }

    while (first != NULL)
    {
        printf("| %d |->",first -> data);
        first = first -> next;
    }
    printf("| NULL|\n");
}

bool Search(PNODE head, int no)
{
    bool bRet = false;
 
    while ( head != NULL)
    {
        if ( head -> data == no )
        {
            bRet = true;
            break;
        }
        head = head -> next;
    }

    return bRet;
}

int main()
{
    PNODE head = NULL;
    int iValue = 0;
    int iSize = 0;
    int iCnt = 0;
    int iElement = 0;
    bool bRet = false;
    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    for (iCnt = iSize; iCnt >= 1; iCnt --)
    {
        printf("Enter element %d: \n",iCnt);
        scanf("%d",&iElement);
        InsertFirst(&head, iElement);
    }
    printf("Enter the value to be found : \n");
    scanf("%d",&iValue);

    Display(head);
    bRet = Search(head, iValue);

    if (bRet == true)
    {
        printf("Element found\n");
    }
    else 
    {
        printf("element not found\n");
    }

    return 0;
}