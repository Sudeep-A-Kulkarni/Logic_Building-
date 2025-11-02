#include <stdio.h>

int CheckGreater(int iNo1, int iNo2, int iNo3)
{
    if (iNo1 > iNo2 && iNo1 > iNo3)
    {
        return iNo1;
    }
    else if (iNo1 < iNo2 && iNo3 < iNo2)
    {   
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    printf("Enter third number : \n");
    scanf("%d",&iValue3);

    iRet = CheckGreater(iValue1, iValue2, iValue3);

    printf("maximum : %d",iRet);

    return 0;
}