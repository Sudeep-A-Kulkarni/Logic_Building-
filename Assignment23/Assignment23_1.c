#include <stdio.h>
#include<Stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL FrequencyNO(int Arr[],int iSize, int FindNO)
{
    int iCnt = 0,iCounter = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == FindNO)
        {
            return TRUE;
        }
    
    }
    return iCounter;
}

int main()
{
    int iLength = 0, NO = 0;
    int *p = NULL;  
    BOOL bRet = FALSE;


    printf("The size of element: \n");
    scanf("%d",&iLength);


    p = (int*)malloc(iLength * sizeof(int));

    if(NULL == p)
    {
        printf("Insufficent Memory");
        return -1;
    }

    printf("Enter the elements : \n");

    for (int iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number: \n");
    scanf("%d",&NO);

    bRet = FrequencyNO(p,iLength,NO);

    if (bRet == TRUE)
    {
        printf("%d is present.",NO);
    }
    else{
        printf("%d is absent.",NO);
    }

    free(p);

    
    return 0;
}