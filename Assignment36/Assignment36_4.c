#include <stdio.h>

void PrintNum(char *ch)
{
    while (*ch != '\0')
    {
        if (*ch >= '0' && *ch <= '9')
        {
            printf("%c",*ch);
        }    
        ch++;
    }
    printf("\n");
}


int main()
{
    char cValue[20] = {'\0'};


    printf("Enter the string : \n");
    scanf("%[^'\n]s",cValue);

    PrintNum(cValue);
    

    return  0;
}