#include <stdio.h>

double SquareMeter(float fNo)
{
    double dSqMeter = 0.0f;

    dSqMeter = fNo * 0.0929;

    return dSqMeter;
}

int main()
{
    float fValue = 0.0f;

    double dRet = 0.0f;

    printf("Enter the area in square foot : \n");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("the area in square meter is : %lf ",dRet);

    return 0;
}