#include <stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char *temp = NULL;
    temp = src;


    while (*src != '\0')
    {
        src++;
    }
    
    src--;

    while (temp <= src)
    {
        *dest = *src;
        dest ++;
        src --;
    }


}

int main()
{
    char arr[30] ;
    char brr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n]s",arr);

    StrCpyRev(arr, brr);
    printf("%s\n",brr);
    
   // printf("%s",brr);

    return 0;
}