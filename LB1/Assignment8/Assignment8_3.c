#include <stdio.h>

int Factorial(int iNo)
{ 
    int iCnt = 0;
    int iFactorial = 0;

    iFactorial = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1 ; iCnt <= iNo; iCnt ++)
    {
        iFactorial = iFactorial * iCnt;
    }

    return iFactorial;
}
////////////////////////////////////////////////////////
//
// Time Complexity : O(N)
//
////////////////////////////////////////////////////////



int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value :\n ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("THe factorial is : %d",iRet);


    return 0;
}