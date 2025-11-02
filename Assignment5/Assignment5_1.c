#include <stdio.h>

void CheckEvenOdd(int ino)
{

    if (ino % 2 == 0)
    {
        printf("This is an Even number.... ");
    }
    else
    {
        printf("this is an idd number....");
    }

}

int main()
{
    int number = 0;

    printf("Enter a number : \n");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}