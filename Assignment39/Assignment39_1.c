# include <stdio.h>

void Display()
{
    static int i = 0;

    if (i <= 5)
    {
        printf("*\t");
        i++;
        Display();
    }
    //printf("\n");
}


int main()
{
    Display();

    return 0;
}