#include <stdio.h>
#include<stdlib.h>



int Maximum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMax = 0;
    iMax = Arr[0];
    
    for (iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {
        if (iMax <= Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum(p,iLength);
    printf("The max is: %d",iRet);
    
    free(p);

    return 0;
}