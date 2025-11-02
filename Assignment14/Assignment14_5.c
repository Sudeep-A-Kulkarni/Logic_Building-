#include <stdio.h>

#define TRUE 1
#define FALSE 0



int CountBelowSix(int iNO)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10;
        if (iDigit <= 6)
        {
            iCount = iCount + 1;
        }
        iNO = iNO / 10;
    }
    return iCount;
}
// time complexity : O(n)
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = CountBelowSix(iValue);
    printf("The frequency of nos smaller than 6 is : %d",iRet);

    return 0;
}