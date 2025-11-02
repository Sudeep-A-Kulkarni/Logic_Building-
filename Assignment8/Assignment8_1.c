#include <stdio.h>

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small");
    }
    else if((iNo >= 50 && iNo <= 100))
    {
        printf("Medium");
    }
    else
    {
        printf("large");
    }

}

/////////////////////////////////////////////////
// time complexity  :  O(0)
/////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter a number  : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}