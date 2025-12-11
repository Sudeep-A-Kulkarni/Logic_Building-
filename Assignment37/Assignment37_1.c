#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *ch, char val)
{
    while ((*ch) != '\0')
    {
        if ((*ch) ==  val)
        {
            return TRUE;
        }
        ch++;
    }
    return FALSE;
}

int main()
{
    char cValue[20] = {'\0'};
    char ch = '\0';
    BOOL bRet = FALSE;

    printf("Enter a string :\n");
    scanf("%[^'\n']s",cValue);

    printf("enter character : \n");
    scanf(" %c",&ch);

    bRet = ChkChar(cValue, ch);

    if (bRet == TRUE)
    {
        printf("the string contains %c\n",ch);
    }
    else
    {
        printf("The string does not contains %c\n",ch);
    }

    

    return 0;
}