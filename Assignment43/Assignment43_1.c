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

void DisplayPerfect(PNODE first)
{
    int iCnt = 0, iCntPerfect = 0;
    int iSumPrime = 0, iSum = 0;
    if (first == NULL)
    {
        printf("LL is empty\n");
    }

    while (first != NULL)
    {
        iSum = 0;
        for (iCnt = 1; iCnt <= ((first -> data) / 2) + 1; iCnt ++)
        {   
            if(((first -> data) % iCnt ) == 0)
            {
                iSum = iSum + iCnt;
            }

        }
        if ( iSum == (first -> data))
        {
            printf("| %d |\t",first ->data);
        }
        first = first -> next;      
    }
    printf("\n");
}

int main()
{
    PNODE head = NULL;
    int iSize = 0;
    int iCnt = 0;
    int iElement = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    for (iCnt = iSize; iCnt >= 1; iCnt --)
    {
        printf("Enter element %d: \n",iCnt);
        scanf("%d",&iElement);
        InsertFirst(&head, iElement);
    }

    Display(head);
    DisplayPerfect(head);

    return 0;
}