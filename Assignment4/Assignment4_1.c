#include <stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iProduct = 0;

    iProduct = 1;
    for (iCnt = 1; iCnt < iNo; iCnt ++)
    {
        if ( iNo % iCnt == 0)
        {
            iProduct = iProduct * iCnt;
        }
    }
    
    return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("The product of the factors is  : %d", iRet);
    
    return 0;
}