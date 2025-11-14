#include <stdio.h>
#include <stdlib.h>

int Check11Frequency(int Arr[],int iSize)
{
    int iCnt = 0,iCounter = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCounter = iCounter + 1;
        }
    }
    return iCounter;
}

int main()
{
    int iLength = 0,iRet = 0;
    int *p = NULL;    

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

    iRet = Check11Frequency(p,iLength);
    printf("FRequency of 11 is: %d",iRet);
    free(p);

    return 0;
}