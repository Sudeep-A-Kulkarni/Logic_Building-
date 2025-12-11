#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL vowel(char *ch)
{
    while((*ch) != '\0')
    {
        if ( (*ch) == 'a' || (*ch) == 'e' || (*ch) == 'i' || (*ch) == 'o' || (*ch) == 'u')
        {
            return TRUE;
        }
        ch++;
    }
    return FALSE;
}

int main()
{
    char cValue[30] = {'\0'};
    BOOL bRet = FALSE;

    printf("enter the string : \n");
    scanf("%[^'\n']s",cValue);

    bRet = vowel(cValue);

    if (bRet == TRUE)
    {
        printf("it contains a vowel...\n");
    }
    else
    {
        printf("does not contain vowel...\n");
    }



    return 0;
}