#include <stdio.h>

void DisplaySchedule(char ch)
{
    if(ch == 'a' || ch == 'A')
    {
        printf("Paper is at 7AM");
    }
    else if(ch == 'b' || ch == 'B')
    {
        printf("Paper is at 8:30AM");
    }
    else if(ch == 'c' || ch == 'C')
    {
        printf("Paper is at 10 AM");
    }
    else if(ch == 'd' || ch == 'D')
    {
        printf("Paper is at 11:30AM");
    }
    else
    {
        printf("Enter valid input..");
    }
}

int main()
{   
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;   
}