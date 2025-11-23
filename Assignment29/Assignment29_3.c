#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 0;
    char cValue = '\0';
    

    for (i = 1; i <= iRow; i++)
    {   
        cValue = 'A';
        for (j = 1; j <= iCol; j++,cValue++)
        {
            if (i % 2 == 0)
            {
                {
                    printf("%d\t",j);

                }
            }
            else
            {
                printf("%c\t",cValue);
            }
        } 
        printf("\n");
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