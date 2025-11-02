#include <stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for (iCnt = (iNo-1); 1 < iCnt && iCnt < iNo; iCnt --)
    {
        if ( iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}