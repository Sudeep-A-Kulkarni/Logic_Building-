#include <stdio.h>

void Pattern(int iNo)
{
    char cValue = '\0';
    int iCnt = 0;
    cValue = 'a';

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c\t",cValue);
        cValue++;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}