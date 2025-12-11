#include <stdio.h>

void StrCpyRev(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'a' && *src <= 'z')
        {
            *dest = * src - 32;
        }
        else
        {
            *dest = *src;
        }
        dest ++;
        src ++;

    }
}

int main()
{
    char arr[30] ;
    char brr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n]s",arr);

    StrCpyRev(arr, brr);
    printf(" %s\n",brr);
    
   // printf("%s",brr);

    return 0;
}