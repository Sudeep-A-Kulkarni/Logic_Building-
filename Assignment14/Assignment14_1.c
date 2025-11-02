#include <stdio.h>

void DigitDisplay(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = iNo;
    }
    while (iNo != 0)
   {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
   }
}

// time complexity : O(N)

int main()
{
    int iValue = 0;
    
    printf("Enter a number : \n");
    scanf("%d",&iValue);

    DigitDisplay(iValue);

    return 0;
}