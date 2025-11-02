#include <stdio.h>

float Percentage(int iTotal, int iObtained)
{
    float fPercentage = 0.0f;

    if (iTotal == 0)
    {
        printf("invalid input...");
        return -1;
    }

    fPercentage = (float)(iObtained * 100) / iTotal;

    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("PLease enter the total marks : \n");
    scanf("%d",&iValue1);

    printf("Please enter the marks obtained : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("The percentage obtained is : %f",fRet);


    return 0;
}