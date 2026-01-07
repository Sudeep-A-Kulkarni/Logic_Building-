#include <stdio.h>
#include<stdlib.h>

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

int SumEven(PNODE first)
{
    int iSum = 0;

    if (first == NULL)
    {
        printf("LL is empty\n");
    }

    while (first != NULL)
    {
        if(((first -> data) % 2 ) == 0)
        {
            iSum = iSum + (first -> data);
        }
        first = first -> next;
    }
    return iSum;
}

int main()
{
    PNODE head = NULL;
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

    iRet = SumEven(head);

    printf("the sum of the even number is : %d\n",iRet);

    return 0;
}