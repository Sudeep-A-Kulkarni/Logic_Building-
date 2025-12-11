#   include <stdio.h>


void Display(char ch)
{
    printf("Decimal ASCII :   %d\n",ch);
    printf("Octal ASCII :   %o\n",ch);
    printf("Hexadecimal ASCII :   %X\n",ch);
}
   

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}