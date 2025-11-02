#include <stdio.h>

int KMtoMeters(int iKM)
{
    int iMeter = 0;

    int iMeter = iKM * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;


    printf("Enter the distance in km :\n ");

    iRet = MKtoMeters(iValue);

    printf("The meter distance is %d",iRet);

    return  0;
}