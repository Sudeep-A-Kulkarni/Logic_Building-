#include <stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEvenCount = 0, iOddCount = 0;

    for (iCnt = 0; iCnt < iSize; iCnt ++ )
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iEvenCount = iEvenCount + 1;
        }
        else
        {
            iOddCount = iOddCount + 1;
        }
    }
    return iOddCount - iEvenCount;
}


int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *p = NULL;
    
    printf("Enter the size of the array : \n");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if ( NULL == p)
    {
        printf("Insufficent Memory ");
        return -1;
    }

    printf("Enter the elements :\n");

    for (iCnt = 0; iCnt < iLength; iCnt ++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iLength);

    printf("The difference between the frequeny of the odd and even numbers is : %d",iRet);
    free(p);

    return 0;   
}