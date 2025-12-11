#include <stdio.h>

void strtoggleX(char *ch)
{
    while (*ch != '\0')
    {
        if (*ch >= 'a' && *ch <= 'z')
        {
            *ch = *ch - 32;
        }
        else if (*ch >= 'A' && *ch <= 'Z')
        {
            *ch = *ch + 32;
        }
        else
        {

        }
        ch++;
    }
}


int main()
{
    char cValue[20] = {'\0'};


    printf("Enter the string : \n");
    scanf("%[^'\n]s",cValue);

    strtoggleX(cValue);
    
    printf("The modified string is : %s\n",cValue);

    return  0;
}