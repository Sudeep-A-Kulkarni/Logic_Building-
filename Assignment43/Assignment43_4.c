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

int SecMaximum(PNODE first)
{
    int iMax = 0;
    int iSecMax = 0;
    PNODE temp = NULL;
    temp = first;
    while ( temp != NULL )
    {
        if ( iMax < (temp -> data) )
        {   
            iMax =  (temp -> data);
            
        }
        temp = temp -> next;
    }
    temp = first;
    printf("Largest no : %d\n",iMax);
    while ( temp != NULL )
    {
        if( ((temp-> data) < iMax) && (iSecMax < (temp -> data)))
        {
            iSecMax = (temp->data);
            printf("%d\t",iSecMax);
            printf("\n");
        }
        
        temp = temp -> next;
    }
    return iSecMax;
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

    iRet = SecMaximum(head);

    printf("second biggest element is : %d\n",iRet);

    return 0;
}


