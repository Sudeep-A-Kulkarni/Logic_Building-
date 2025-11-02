#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CHKZero(int iNO)
{
    int iDigit = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10;
        printf("%d\n",iDigit);
        if (iDigit == 0)
        {
            return TRUE;
        }
        iNO = iNO / 10;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    bRet = CHKZero(iValue);

    if (bRet == TRUE)
    {
        printf("0 is present .. \n");
    }
    else
    {
        printf("0 is absent..");
    }

    return 0;
}