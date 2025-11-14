#include <stdio.h>
#include <stdlib.h>

int CheckNOFrequency(int Arr[],int iSize, int FindNO)
{
    int iCnt = 0,iCounter = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == FindNO)
        {
            iCounter = iCounter + 1;
        }
    }
    return iCounter;
}

int main()
{
    int iLength = 0,iRet = 0, NO = 0;
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

    printf("Enter the number: \n");
    scanf("%d",&NO);

    iRet = CheckNOFrequency(p,iLength,NO);
    printf("FRequency %d of 11 is: %d",NO,iRet);
    free(p);
    
    return 0;
}