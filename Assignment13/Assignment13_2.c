#include<stdio.h>

void print_even_numbers(int no)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= no ; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);  
            }
    }
}
//time complexity = O(n)
int main()
{
    int limit;

    printf("ENter the limit : \n");
    scanf("%d",&limit);

    print_even_numbers(limit);


    return 0;
}