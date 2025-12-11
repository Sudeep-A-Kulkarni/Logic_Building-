#include <stdio.h>

void DisplayASCII()
{
    int a = 0;
    printf("___________________________________________________________\n");
    printf("|\tdecimal\t|\thexadecimal\t|\tASCII\t|\n");
    printf("___________________________________________________________\n");
    
    for (a = 0; a <= 127; a++)
    {
        printf("|\t%-7d\t|\t0x%-9X\t|\t%-5c\t|\n",a,a,a);
    }
    printf("__________________________________________________________\n");

}

int main()
{
    DisplayASCII();

    return 0;
}