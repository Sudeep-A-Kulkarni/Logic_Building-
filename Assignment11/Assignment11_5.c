#include <stdio.h>

void RangeDisplayRev(int iNo1, int iNo2)
{
    int iCnt = 0;

    if (iNo2 < iNo1)
    {
        printf("invalid range \n");
        return;
    }
    if (iNo1 < 0)
    {
        printf("invalid input...please give positive number input ....");
        return;
    }

    for (iCnt = iNo2; iCnt >= iNo1 ; iCnt --)
    {
        printf("%d\t",iCnt);
    }       
}

/// time complexity O(N)

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("ENter the starting point : \n");
    scanf("%d",&iValue1);

    printf("ENter the Ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;

}