#include <stdio.h>
#include<stdlib.h>



int OddProduct(int Arr[],int iSize)
{
    int iCnt = 0,iProduct = 0;
    iProduct = 1;
    for (iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] % 2 == 1)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    
    }
    return iProduct;
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
    int iStart = 0, iEnd = 0;
    

    iRet = OddProduct(p,iLength);
    printf("The product of the odd elements is : %d",iRet);
    
    free(p);

    return 0;
}