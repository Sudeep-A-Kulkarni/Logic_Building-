#include<stdio.h>

int ChkChar(char *ch, char val)
{
    int iCount = 0, iMax = 0, iCounter = 0;
    while ((*ch) != '\0')
    {
        iCounter ++;
        if ((*ch) ==  val)
        {
            iMax = iCounter;
        }
        ch++;
    }
    return iMax;
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

    iRet = ChkChar(cValue, ch);
    
    printf("The last occurence of %c is %d\n",ch,iRet);

    return 0;
}   