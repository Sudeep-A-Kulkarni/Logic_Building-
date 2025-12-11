# include <stdio.h>

void Display()
{
    static int i = 'A';

    if (i <= 'F')
    {
        printf("%c\t",i);
        i++;
        Display();
    }
    
}


int main()
{
    Display();
    printf("\n");

    return 0;
}