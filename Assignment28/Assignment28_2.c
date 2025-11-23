#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char cValue1 = '\0', cValue2 = 0;


    for (i = 1; i <= iRow; i++)
    {
        cValue1 = 'A';
        cValue2 = 'a';

        for (j = 1; j <= iCol; j++,cValue1++,cValue2++)
        {     
            if (i % 2 != 0)
            {
                printf("%c\t",cValue1);   
            }
            else
            {
                printf("%c\t",cValue2);
            } 
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