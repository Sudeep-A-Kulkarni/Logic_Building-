#include<stdio.h>

int sum_even_numbers(int no)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 1; iCnt <= no ; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;   
    
        }
    }
    return iSum;
}
//time complexity = O(n)
int main()
{
    int limit = 0, ret = 0;

    printf("ENter the limit : \n");
    scanf("%d",&limit);

    ret = sum_even_numbers(limit);
    printf("the sum of n even numbers is : %d",ret);


    return 0;
}