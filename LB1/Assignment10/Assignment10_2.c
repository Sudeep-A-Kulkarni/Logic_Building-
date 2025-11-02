#include <stdio.h>

double AreaRect(float fNo1, float fNo2)
{
    double dArea = 0;
    dArea = fNo1 * fNo2;

    return dArea;
}

int main()
{
    float fValue1 = 0, fValue2 = 0;
    double dRet = 0.0f;

    printf("Width : \n");
    scanf("%f",&fValue1);

    printf("Height : \n");
    scanf("%f",&fValue2);

    dRet = AreaRect(fValue1,fValue2);

    printf("the area is : %lf",dRet);
    
    return 0;
}