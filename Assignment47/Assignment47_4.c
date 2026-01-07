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

void DisplayPrime(PNODE head)
{
    int iCnt = 0;
    int iSum = 0;
    int iDigit = 0;

    while ( head != NULL)
    {
        iSum = 0;
        for(iCnt = 1; iCnt <= ((head->data)/2)+1;iCnt ++)
        {
            if (head->data % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if (iSum == 1)
        {
            printf("%d\t",head->data);
        }
        
        head = head -> next;
    }
    printf("\n");
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

int main()
{
    PNODE head = NULL;
    int iValue = 0;
    int iSize = 0;
    int iCnt = 0;
    int iElement = 0;
    int iRet = 0;
    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    for (iCnt = iSize; iCnt >= 1; iCnt --)
    {
        printf("Enter element %d: \n",iCnt);
        scanf("%d",&iElement);
        InsertFirst(&head, iElement);
    }

    Display(head);

    DisplayPrime(head);
    
    return 0;
}