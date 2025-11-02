#include <stdio.h>

int Table(int iNo)
{ 
    int iCnt = 0;
    for (iCnt = 1; iCnt <= 10; iCnt ++)
    {
        printf("%d\t*\t%d\t=\t%d\n\n", iNo, iCnt, iNo * iCnt);
    }
}
//  Time Complexity : O(1)

int main()
{
    int iValue = 0;

    printf("Enter the value :\n ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}