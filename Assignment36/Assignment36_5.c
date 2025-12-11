#include <stdio.h>

int CountWhite(char *ch)
{
    int iCount = 0;
    while (*ch != '\0')
    {
        if ((*ch) == ' ')
        {
            iCount ++;
        }    
        ch++;
    }
    return iCount;
}


int main()
{
    char cValue[20] = {'\0'};
    int iRet = 0;


    printf("Enter the string : \n");
    scanf("%[^'\n]s",cValue);

    iRet = CountWhite(cValue);

    printf("The number of white spaces is : %d\n",iRet);
    

    return  0;
}