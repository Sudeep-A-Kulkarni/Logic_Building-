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

int Minimum(PNODE first)
{
    int iMin = 0;
    iMin = first -> data;   
    if ((first) == NULL)
    {
        return -1;
    }
    else
    {
        while(first != NULL)
        {
            if(iMin > (first -> data))
            {
                iMin = (first -> data);
            }
            first = first -> next;
        }
    }
    return iMin ;
}

int main()
{
    PNODE head = NULL;

    int iRet = 0;

    InsertFirst(&head, 10);
    InsertFirst(&head, 20);
    InsertFirst(&head, 50);
    InsertFirst(&head, 60);
    InsertFirst(&head, 3);
    InsertFirst(&head, 30);
    InsertFirst(&head, 31);
    InsertFirst(&head, 95);

    iRet = Minimum(head);

    printf("Minimum number is : %d\n", iRet);
    
    return 0;
}