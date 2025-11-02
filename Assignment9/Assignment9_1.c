#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= (2 * iNo); iCnt ++ )
    {
        if (iCnt <= iNo)
        {
            printf("#\t");
        }
        else
        {
            printf("*\t");
        }
        
    }
    
}

// Time Complexity =  O(2N)



int main()
{
    int iValue = 0;

    printf("Enter the value :\n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}