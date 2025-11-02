#include <stdio.h>

#define TRUE 1
#define FALSE 0



int Product_of_digits(int iNO)
{
    int iDigit = 0;
    int iProduct = 0;

    iProduct = 1;

    while (iNO != 0)
    {
        iDigit = iNO % 10;
        iProduct = iProduct * iDigit;
        iNO = iNO / 10;
    }
    return iProduct;
}
// time complexity : O(n)
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = Product_of_digits(iValue);
    printf("the product of digits is : %d",iRet);

    return 0;
}