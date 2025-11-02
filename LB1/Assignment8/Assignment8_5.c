#include <stdio.h>

int RevTable(int iNo)
{ 
    int iCnt = 0;
    for (iCnt = 10; iCnt > 0; iCnt --)
    {
        printf("%d\t", iNo * iCnt);
    }
}
//  Time Complexity : O(1)

int main()
{
    int iValue = 0;

    printf("Enter the value :\n ");
    scanf("%d",&iValue);

    RevTable(iValue);

    return 0;
}