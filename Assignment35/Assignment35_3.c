#include <stdio.h>

int Difference(char *ch)
{
    int iCountCapital = 0, iCountSmall = 0;

    if((*ch) == '\0')
    {
        return -1;
    }
    
    while ((*ch) != '\0')
    {
        if (( (*ch )>= 'a') && ((*ch) <= 'z'))
        {
            iCountSmall = iCountSmall + 1;
        }
        else if (( ((*ch) >= 'A') && ((*ch) <= 'Z')))
        {
            iCountCapital = iCountCapital + 1;
        }
        else{}

        ch ++;
    }
    return iCountSmall - iCountCapital;
}

int main()
{
    char cValue[20] = {'\0'};
    int iRet = 0;

    printf("Enter the string    :\n");
    scanf("%[^'\n']s",cValue);

    iRet = Difference(cValue);

    if (iRet == -1)
    {
        printf("Invalid input ...\n");
    }
    else
    {
        printf("The difference is : %d\n",iRet);
    }

    return 0;
}