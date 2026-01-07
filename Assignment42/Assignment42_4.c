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

int Maximum(PNODE first)
{
    int iMax = 0;
    if ((first) == NULL)
    {
        return -1;
    }
    else
    {
        while(first != NULL)
        {
            if(iMax < (first -> data))
            {
                iMax = (first -> data);
            }
            
            first = first -> next;
        }
    }
    return iMax ;
}

int main()
{
    PNODE head = NULL;

    int iRet = 0;

    InsertFirst(&head, 10);
    InsertFirst(&head, 20);
    InsertFirst(&head, 50);
    InsertFirst(&head, 60);
    InsertFirst(&head, 340);
    InsertFirst(&head, 30);
    InsertFirst(&head, 31);
    InsertFirst(&head, 95);

    iRet = Maximum(head);

    printf("Maximum number is : %d\n", iRet);
    
    return 0;
}