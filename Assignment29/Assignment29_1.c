#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    int iDisplay = 1;
    

    for (i = iRow; i >= 1; i--)
    {
        
        for (j = 1; j <= iCol; j++,iDisplay++)
        { 
            if (iDisplay > 9)
            {
                iDisplay = 1;
            }
            printf("%d\t",iDisplay);
        } 
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of colums : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}