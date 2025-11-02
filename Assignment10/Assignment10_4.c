#include <stdio.h>

double FhtoCel(float fTemp)
{
    double dCel = 0.0f;

    float temp = 0.0f;


    temp = (double)5/9 ;

    dCel = (double) (fTemp - 32.0) * (temp);

    return dCel;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter the temperature in Farenhite: \n");
    scanf("%f",&fValue);


    dRet = FhtoCel(fValue);

    printf("the temperature in celcius is : %f",dRet);

    return 0;
}