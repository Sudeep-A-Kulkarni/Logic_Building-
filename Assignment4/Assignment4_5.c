#include <stdio.h>

int diffFact(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDifference = 0;

    for (iCnt = 1 ;iCnt < iNo; iCnt ++)
    {
        if ( iNo % iCnt != 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }

    iDifference = iSum2- iSum1;

    return iDifference;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = diffFact(iValue);

    printf("The difference between factors and non factors is : %d",iRet);

    return 0;
}