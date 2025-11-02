#include <stdio.h>

#define TRUE 1
#define FALSE 0



int CountEven(int iNO)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10;
        if (iDigit % 2 == 0)
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

    iRet = CountEven(iValue);
    printf("The frequency of Even nos is : %d",iRet);

    return 0;
}