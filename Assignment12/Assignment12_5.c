#include <stdio.h>
#include <stdbool.h>

bool is_divisible_by_5(int no)
{
    if (no % 5 == 0)
    {
        return true;
    }
    else{
        return false;
    }
}
// time complexity : O(0)

int main()
{
    int number = 0;
    printf("Enter the number : \n");
    scanf("%d",&number);

    printf("%s \n",is_divisible_by_5(number)? "Yes":"no");

    return 0;
}