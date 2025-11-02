#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iCnt = iNo;

    while (iCnt > 0)
    {
        printf("*\n");
        iCnt --;
    }

}

int main()
{
    int iValue  = 0;
    printf("Enter a number  : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
