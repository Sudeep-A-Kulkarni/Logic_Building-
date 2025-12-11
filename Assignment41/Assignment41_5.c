# include <stdio.h>

int product(int iNo)
{
    static int iProduct = 1;
    int iDigit = 0;
    
    if (iNo != 0)
    {
        iDigit = iNo % 10;
        iProduct = iProduct * iDigit;
        iNo = iNo / 10;
        Sum (iNo);
    }

    return iProduct;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = product(iValue);
    
    printf("The internal product : %d\n",iRet);

    return 0;
}