#include <stdio.h>

#define TRUE 1
#define FALSE 0



int Count_Between_three_and_seven(int iNO)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10;
        if (iDigit >= 3 && iDigit <=7)
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

    iRet = Count_Between_three_and_seven(iValue);
    printf("The frequency of Odd nos is : %d",iRet);

    return 0;
}