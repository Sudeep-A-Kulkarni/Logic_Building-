#include <stdio.h>
#include<stdlib.h>



void DivisibleBy5And3(int Arr[],int iSize)
{
    int iCnt = 0,iSumEven = 0, iSumOdd = 0;
    printf("The numbers divisible by 3 and 5 are : \n");
    
    for (iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {
        if (((Arr[iCnt] % 5) == 0) && ((Arr[iCnt]) % 3 == 0))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
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

    DivisibleBy5And3(p,iLength);
    
    free(p);

    return 0;
}