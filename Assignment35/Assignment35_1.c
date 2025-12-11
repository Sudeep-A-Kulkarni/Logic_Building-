#include <stdio.h>

int CountCapital(char *str)
{
    int iCounter = 0;

    if (str == NULL)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            iCounter ++;
        }
        str ++;
    }
    return iCounter;
}

int main()
{
    char arr[50] = {'\0'};

    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    if (iRet == -1)
    {
        printf("Enter valid input ...\n");
    }
    else
    {
        printf("Capital letter are : %d",iRet);
    }

    return 0;
}