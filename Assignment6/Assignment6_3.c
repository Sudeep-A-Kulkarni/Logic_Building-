#include <stdio.h>
#include <stdbool.h>

bool ChkEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;

    bool bRet = false;

    printf("Enter two numbers : \n");
    scanf("%d\n%d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if (bRet = true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }


    return 0;
}