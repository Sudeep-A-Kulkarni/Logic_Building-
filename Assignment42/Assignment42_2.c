#include <stdio.h>
#include <stdlib.h>
#define TRUE 1;
#define FALSE 0;


typedef int BOOL;

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
    newn -> data = no;
    newn -> next = NULL;

    if ((*first) == NULL)
    {
        (*first) = newn;
    }
    else
    {
        newn -> next = (*first);
        (*first) = newn;
    }
}

int FirstOccurence(PNODE first, int no)
{
    PNODE temp = NULL;
    int iCount = 0;
    int iMaxOccurrence = 0;
    
    iCount = 1;
    if ((first) == NULL)
    {
        return -1;
    }
    else
    {
        temp = (first);

        while(temp != NULL)
        {
            if ( (temp -> data) == no )
            {
                if(iMaxOccurrence < iCount)
                {
                    iMaxOccurrence = iCount;
                }
            }
            iCount ++;
            temp = temp -> next;
        }
    }
    return iMaxOccurrence ;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 50);
    InsertFirst(&head, 30);
    InsertFirst(&head, 30);
    InsertFirst(&head, 90);


    iRet = FirstOccurence(head, iValue);

    if( iRet ==  0)
    {
        printf("No element found\n");
    }
    else
    {
        printf("The last occurrence of %d is : %d\n",iValue, iRet);
    }
    return 0;
}