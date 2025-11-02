#include <stdio.h>
#include <stdbool.h>

bool ChkGreater(int iNo)
{
    if (iNo > 100)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number  :");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if (bRet = true)
    {
        printf("The number is greater");
    }
    else
    {
        printf("THe number is small...");
    }

}