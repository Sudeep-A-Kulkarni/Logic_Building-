#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iProduct = 0;

    iProduct = 1;

    for(iCnt = 1 ; iCnt <= iNo; iCnt ++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
            iProduct = iProduct * iCnt ;

        }
    }
    return iProduct ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value :\n ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("\nThe Even factorial is : %d\n",iRet);    

    return 0;
}