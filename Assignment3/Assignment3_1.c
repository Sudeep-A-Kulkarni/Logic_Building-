#include <stdio.h>

void PrintEven(int iNo)
{   
    int iCnt = 0;
    int iValue = 2;

    if (iNo <= 0)
    {
        return ;
    }

    
    while (iCnt < iNo)
    {
        printf("%d\t", iValue);
        iCnt = iCnt + 1;
        iValue = iValue + 2;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter a number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);


    return 0;
}