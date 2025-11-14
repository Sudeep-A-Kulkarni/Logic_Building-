#include <stdio.h>
#include<stdlib.h>



void Range(int Arr[],int iSize, int start,int end)
{
    int iCnt = 0,iCounter = 0;

    for (iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] > start && Arr[iCnt] < end)
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
    int iStart = 0, iEnd = 0;
    printf("Enter the start: \n");
    scanf("%d",&iStart);
    printf("enter the end point\n");
    scanf("%d",&iEnd);

    Range(p,iLength,iStart,iEnd);
    
    free(p);

    return 0;
}