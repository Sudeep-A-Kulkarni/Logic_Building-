#include <stdio.h>
#include<stdlib.h>



int LastOccurrence (int Arr[],int iSize, int FindNO)
{
    int iCnt = 0,iCounter = 0;

    for (iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == FindNO)
        {
            return iCnt;
        }
    }
    return -1;
}

int main()
{
    int iLength = 0, NO = 0;
    int *p = NULL;  
    int iRet = 0;

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

    iRet = LastOccurrence (p,iLength,NO);
    if ( -1 == iRet)
    {
        printf("number is not present.");
    }
    else
    {
        printf("The position of %d is : %d",NO,iRet+1);
    }

    free(p);

    
    return 0;
}