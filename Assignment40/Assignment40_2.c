# include <stdio.h>

void Display(int iNO)
{
    static int i = 1;
    if (i <= iNO)
    {
        printf("%d\t",i);
        i++;
        Display(iNO);
    }
    
}


int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    Display(iValue);
    printf("\n");

    return 0;
}