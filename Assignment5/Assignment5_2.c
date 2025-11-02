#include <stdio.h>

int CheckGreater(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        return iNo1;
    }
    else if(iNo1 == iNo2)
    {
        printf("invalid input...");
        return;
    }
    else
    {
        return iNo2;
    }

    
}

int main()
{
    int num1 = 0, num2 = 0;
    int result = 0;

    printf("Enter first number: \n");
    scanf("%d",&num1);

    printf("Enter second number: \n");
    scanf("%d",&num2);

    result = CheckGreater(num1, num2);

    printf("The greater number is  : %d",result);


    return 0;
}