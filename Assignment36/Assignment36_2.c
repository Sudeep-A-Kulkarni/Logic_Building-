#include <stdio.h>

void struprX(char *ch)
{
    while (*ch != '\0')
    {
        if (*ch >= 'a' && *ch <= 'z')
        {
            *ch = *ch - 32;
        }
        ch++;
    }
}


int main()
{
    char cValue[20] = {'\0'};


    printf("Enter the string : \n");
    scanf("%[^'\n]s",cValue);

    struprX(cValue);
    
    printf("The modified string is : %s\n",cValue);

    return  0;
}