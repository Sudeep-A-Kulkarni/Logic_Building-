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

void DisplayReverse(PNODE head, int iSize)
{
    PNODE temp = NULL;  
    if (head == NULL)
    {
        return;
    }
    else if ( head -> next == NULL )
    {
        printf("%d\t",head->data);
        free(head);
        head = NULL;
    }
    else
    {
        temp = head;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        printf("%d\t",temp->next->data);
        free(temp->next);
        temp->next = NULL;
    }
    iSize--;
    DisplayReverse(head, iSize);
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
    DisplayReverse(head,iSize);


    return 0;
}