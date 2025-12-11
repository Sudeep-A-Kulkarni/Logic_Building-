
# include <stdio.h>

void Display(int iNo)
{
    static int iCount = 0;
    static int i = 'A';

    if (iCount <= iNo)
    {
        printf("%c\t",i);
        i++;
        iCount++;
        Display(iNo);
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