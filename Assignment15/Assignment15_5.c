#include <stdio.h>

#define TRUE 1
#define FALSE 0



int Difference_of_Odd_and_Even(int iNO)
{
    int iDigit = 0;
    int i_Sum_Odd = 0;
    int i_Sum_Even = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10;
        if(iDigit % 2 == 0)
        {
            i_Sum_Even = i_Sum_Even + iDigit;
        }
        else
        {
            i_Sum_Odd = i_Sum_Odd + iDigit;
        }
        iNO = iNO / 10;
    }
    return i_Sum_Even - i_Sum_Odd;
}
// time complexity : O(n)
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = Difference_of_Odd_and_Even(iValue);
    printf("the difference odd and even digits : %d",iRet);

    return 0;
}