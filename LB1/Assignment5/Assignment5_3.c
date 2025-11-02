#include <stdio.h>

void CheckLeapYear(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("it is a leap year...");
    }
    else if (year % 100 == 0 && year % 400 == 0)
    {
        printf("it is a leap year ..");
    }
    else
    {
        printf("it is not a leap year...");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter a year : \n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return 0;
}