#include <stdio.h>

void strlwrX(char *ch)
{
    while (*ch != '\0')
    {
        if (*ch >= 'A' && *ch <= 'Z')
        {
            *ch = *ch + 32;
        }
        ch++;
    }
}


int main()
{
    char cValue[20] = {'\0'};


    printf("Enter the string : \n");
    scanf("%[^'\n]s",cValue);

    strlwrX(cValue);
    
    printf("The modified string is : %s\n",cValue);

    return  0;
}