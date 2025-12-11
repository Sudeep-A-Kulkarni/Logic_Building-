#include <stdio.h>

void Reverse(char *ch)
{
    char *temp = NULL;
    temp = ch;
    while(*ch != '\0')
    {
        ch ++;
    }

    while (temp <= ch)
    {
        printf("%c",*ch);
        ch--;
    }
    printf("\n");
}


int main()
{
    char cValue[30] = {'\0'};

    printf("enter the string : \n");
    scanf("%[^'\n']s",cValue);

    Reverse(cValue);

    return 0;
}