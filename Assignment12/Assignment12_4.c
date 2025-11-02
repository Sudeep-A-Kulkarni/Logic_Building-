#include <stdio.h>

int sum_of_even_factors(int iNo)
{
    int icnt = 0;
    int isum = 0;

    for (icnt = 1; icnt <= iNo/2 ; icnt ++)
    {
        if (iNo % icnt == 0)
        {
            if (icnt %2 == 0)
            {
                isum += icnt;
            }   
        }
    }
    return isum;
}

// time complexity = O(N)

int main()
{
    int number = 0;
    
    printf("Enter a number : \n");
    scanf("%d",&number);

    printf("the sum is : %d",sum_of_even_factors(number));

    return 0;
}