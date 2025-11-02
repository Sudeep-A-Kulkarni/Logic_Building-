#include <stdio.h>

int RangeDisplaySum(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo2 < iNo1)
    {
        printf("invalid range \n");
        return -1;
    }
    if (iNo1 < 0)
    {
        printf("invalid input...please give positive number input ....");
        return -1;
    }

    for (iCnt = iNo1; iCnt <= iNo2; iCnt ++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}
// time complexity O(N)

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("ENter the starting point : \n");
    scanf("%d",&iValue1);

    printf("ENter the Ending point : \n");
    scanf("%d",&iValue2);

    iRet = RangeDisplaySum(iValue1,iValue2);

    if (iRet == -1){
        printf("Task Failed...");
    }
    else{

        printf("the sum of numbers in the range is : %d",iRet);
    }
    return 0;

}