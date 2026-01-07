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

void DisplayGreaterThanAverage(PNODE head)
{
    int iSum = 0,iCount = 0;
    float iAvg = 0;
    PNODE temp = NULL;
    temp = head;
    while ( temp != NULL)
    {
        iSum = iSum + temp->data;
        iCount ++;
        temp = temp->next;
    }

    iAvg = iSum / iCount;


    while ( head != NULL)
    {
        if (head->data > iAvg)
        {
            printf("%d\t",head->data);
        }
        head = head->next;
    }
}

bool CheckSorted(PNODE head)
{
    bool bFlag = false;
    bFlag = true;
    while (head->next != NULL)
    {
        if ((head->data) > (head->next->data))
        {
            bFlag = false;
            break;
        }
        head = head->next;
    }
    return bFlag;
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
  


    bRet = CheckSorted(head);
    if ( bRet == true)
    {
        printf("the list is sorted");
    }
    else
    {
        printf("the list is not sorted");
    }
    printf("\n");

    return 0;
}