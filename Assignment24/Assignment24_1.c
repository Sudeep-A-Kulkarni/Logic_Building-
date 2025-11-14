#include <stdio.h>
#include<stdlib.h>



int DifferenceEvenOdd(int Arr[],int iSize)
{
    int iCnt = 0,iSumEven = 0, iSumOdd = 0;

    for (iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] % 2 == 1)
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
        else{
            iSumEven = iSumEven + Arr[iCnt];
        }
    
    }
    return (iSumEven - iSumOdd);
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

    iRet = DifferenceEvenOdd(p,iLength);
    printf("The differrnce between Even and Odd is  : %d",iRet);
    
    free(p);

    return 0;
}