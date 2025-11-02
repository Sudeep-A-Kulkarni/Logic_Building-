#include <stdio.h>

#define TRUE 1
#define FALSE 0



int CountTwo(int iNO)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10;
        printf("%d\n",iDigit);
        if (iDigit == 2)
        {
            iCount = iCount + 1;
        }
        iNO = iNO / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("The frequency of two is : %d",iRet);

    return 0;
}