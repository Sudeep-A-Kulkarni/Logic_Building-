#include <stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iProduct = 0;

    if(iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
    {
        printf("The input is invalid ....\n");
    }

    iProduct = iNo1 * iNo2 * iNo3;

    return iProduct;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter 3 numbers : \n");
    scanf("%d\n%d\n%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("The product is : %d",iRet);

    return 0;
}