#include <stdio.h>

void DisplayConvert(char cLetter)
{
    if (cLetter>= 'a' && cLetter <= 'z')
    {
        printf("the letter is small....\n");
        printf("The capital case letter is : %c",(cLetter - 32));
    }

    else if (cLetter>= 'A' && cLetter <= 'Z')
    {
        printf("the letter is capital....\n");
        printf("The capital case letter is : %c",(cLetter +  32));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);



    return 0;
}