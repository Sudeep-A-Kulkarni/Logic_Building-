#include <stdio.h>

void CheckLeapYear(int iNo)
{
    if (iNo > 0)
    {
        printf("Positive number ...");
    }
    else if (iNo == 0)
    {
        printf("number is 0");
    }
    else
    {
        printf("Negative number..");
    }
}

int main()
{
    int iNumber = 0;

    printf("Enter a number : \n");
    scanf("%d",&iNumber);

    CheckLeapYear(iNumber);

    return 0;
}