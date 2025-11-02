#include <stdio.h>

void print_factors(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt ++)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
// Time complexity : O(N/2)

int main()
{
    int number = 0;

    printf("ENter a number : \n");
    scanf("%d",&number);
    
    print_factors(number);

    return 0;
}