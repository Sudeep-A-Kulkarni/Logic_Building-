#include <stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0;

    dArea = (double)(3.14 * fRadius * fRadius );

    return dArea;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("The area of circle is : %lf", dRet);
    

    return 0;
}