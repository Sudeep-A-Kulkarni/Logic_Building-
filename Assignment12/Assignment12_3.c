#include <stdio.h>

int sum_of_factors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt ++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
// Time complexity : O(N/2)

int main()
{
    int number = 0;
    int iRet = 0;

    printf("ENter a number : \n");
    scanf("%d",&number);
    
    iRet = sum_of_factors(number);
    printf("The sum of factors is : %d",iRet);

    return 0;
}   