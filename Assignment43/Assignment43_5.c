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

int AdditionDigit(PNODE first)
{
    PNODE temp = NULL;
    temp = first;
    int iDigit = 0;
    int iData = 0;
    int iSum = 0;
    while ( temp != NULL )
    {
        iSum = 0;
        while((temp -> data) != 0)   
        {
            iDigit = (temp -> data) % 10;
            iSum = iSum + iDigit;
            temp -> data = (temp -> data) / 10;
        }
        printf("%d\t", iSum);
        temp = temp -> next;
    }
    temp = first;
    printf("\n");

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

    AdditionDigit(head);

    return 0;
}


