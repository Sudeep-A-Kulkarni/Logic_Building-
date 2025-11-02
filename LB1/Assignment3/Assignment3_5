# include <stdio.h>
# include <stdbool.h>


#define TRUE 1
#define FALSE 0

bool ChkVowel(char cLetter)
{
    if (
        cLetter == 'a' || 
        cLetter == 'e' ||
        cLetter == 'i' ||
        cLetter == 'o' ||
        cLetter == 'u'
        )
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
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter a character : \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("The letter is a vowel...");
    }
    else
    {
        printf("The letter is not vowel....");
    }



    return 0;
}