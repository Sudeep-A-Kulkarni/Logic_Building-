#include <stdio.h>
 
int DollartoINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter DOllar Value :\n ");
    scanf("%d",&iValue);

    iRet = DollartoINR(iValue);

    printf("The inr value is  : %d", iRet);
    

    return 0;
}
