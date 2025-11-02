#include <stdio.h>

int count_factors(int iNo)
{
    int iCnt = 0;
    int iCounter = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt ++)
    {
        if (iNo % iCnt == 0)
        {
            iCounter ++ ;
        }
    }
    return iCounter;
}
// Time complexity : O(N/2)

int main()
{
    int number = 0;
    int iRet = 0;

    printf("ENter a number : \n");
    scanf("%d",&number);
    
    iRet = count_factors(number);
    printf("The number of factors is : %d",iRet);

    return 0;
}