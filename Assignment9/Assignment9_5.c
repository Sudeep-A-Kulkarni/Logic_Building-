#include <stdio.h>

int DifferenceFactorial(int iNo)
{
    int iCnt = 0;
    int iProductOdd = 0;
    int iProductEven = 0;


    for(iCnt = 1 ; iCnt <= iNo; iCnt ++)
    {
        if (iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
            iProductOdd = iProductOdd * iCnt ;

        }
    }
    iProductEven = 1;

    for(iCnt = 1 ; iCnt <= iNo; iCnt ++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
            iProductEven = iProductEven * iCnt ;

        }
    }
    return iProductOdd - iProductEven ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value :\n ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("\nThe Odd factorial is : %d\n",iRet);    

    return 0;
}