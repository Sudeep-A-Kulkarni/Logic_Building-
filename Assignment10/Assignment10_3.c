#include <stdio.h>

int KMtoMeters(int iKM)
{
    int iMeter = 0;

    iMeter = iKM * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;


    printf("Enter the distance in km :\n ");
    scanf("%d",&iValue);

    iRet = KMtoMeters(iValue);

    printf("The meter distance is %d",iRet);

    return  0;
}