#include <stdio.h>

void Display(char ch)
{
    int iCnt = 0;
    if ((ch >= 'a') && (ch <= 'z'))
    {
        for (iCnt = ch; iCnt >= 'a'; iCnt --)
        {
            printf("%c\t",iCnt);
        }
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        for (iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t",iCnt);
        }
    }
    else
    {
        printf("Enter a valid input...");
    }

}

int main()
{
    char cValue = '\0';

    printf("enter a character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}