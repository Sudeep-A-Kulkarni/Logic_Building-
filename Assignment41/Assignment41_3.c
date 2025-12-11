# include <stdio.h>

int Count(char *ch)
{
    static int iCounter = 0;

    if (*ch != '\0')
    {
        iCounter ++;
        ch ++;
        Count(ch);
    }

    return iCounter;
}


int main()
{
    int iRet = 0;
    char cValue[30] = {'\0'};

    printf("Enter character : \n");
    scanf("%[^'\n']s",cValue);

    iRet = Count(cValue);

    printf("the string contains : %d\n",iRet);

    return 0;
}