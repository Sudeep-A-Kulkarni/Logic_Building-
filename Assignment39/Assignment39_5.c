# include <stdio.h>

void Display()
{
    static int i = 'a';

    if (i <= 'f')
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