#include<stdio.h>

int ChkIndex(char *ch, char val)
{
    int iCount = 0;

    while ((*ch) != '\0')
    {
        iCount ++;

        if ((*ch) ==  val)
        {
            return iCount;
        }
        ch++;
    }
    printf("Element not found\n");
}

int main()
{
    char cValue[20] = {'\0'};
    char ch = '\0';
    int iRet = 0;

    printf("Enter a string :\n");
    scanf("%[^'\n']s",cValue);

    printf("enter character : \n");
    scanf(" %c",&ch);

    iRet = ChkIndex(cValue, ch);
    
    printf("The index of %c is %d\n",ch,iRet);

    return 0;
}   