#   include <stdio.h>
#   define  TRUE    1
#   define  FALSE    0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if (( ch == '*') || ( ch == '@') || ( ch == '#') || ( ch == '$') || ( ch == '%') || ( ch == '&'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    BOOL bRet =  FALSE;
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if ( bRet == TRUE)
    {
        printf("character is special...");
    }
    else
    {
        printf("character is not special...");
    }

    return 0;
}