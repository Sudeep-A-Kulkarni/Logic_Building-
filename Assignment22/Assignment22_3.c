#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check11(int Arr[],int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }
    }
}

int main()
{
    int iLength = 0;
    int *p = NULL;    
    bool bRet = false;

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

    bRet = Check11(p,iLength);

    if(bRet == true)
    {
        printf("The array contains 11");
    }
    else
    {
        printf("The array doesnt contain 11");
    }
    free(p);

    return 0;
}