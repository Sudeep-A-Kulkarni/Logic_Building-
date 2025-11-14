#include <stdio.h>
#include<stdlib.h>



void Display(int Arr[],int iSize)
{
    int iCnt = 0;
    int iDigitCounter = 0;
    int iNo = 0;
    int iDigit = 0;
    int iDigitSum = 0;
    
    for (iCnt = 0; iCnt < iSize; iCnt ++)
    {
        iNo = Arr[iCnt];
        iDigitCounter = 0;
        iDigitSum = 0;
        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iDigitSum = iDigitSum + iDigit;
            iNo = iNo /10;
            iDigitCounter ++;
        }
        printf("%d\t",iDigitSum);
        
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

    Display(p,iLength);
    
    free(p);

    return 0;
}