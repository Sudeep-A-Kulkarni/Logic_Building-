#include <stdio.h>

void RangeDisplay(int iNo1, int iNo2)
{
    int iCnt = 0;

    if (iNo2 < iNo1)
    {
        printf("invalid range \n");
        return;
    }

    for (iCnt = iNo1; iCnt <= iNo2; iCnt ++)
    {
        printf("%d\t",iCnt);
    }

}

// time complexity : O(n)
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("ENter the starting point : \n");
    scanf("%d",&iValue1);

    printf("ENter the Ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);


    return 0;

}