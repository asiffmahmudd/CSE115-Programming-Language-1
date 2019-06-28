#include <stdio.h>
main()
{
    int i, j;
    char a[100], b[100];
    printf("Enter a word: ");
    gets(a);
    for(i = 0, j = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 97 && a[i] <= 122)
        {
            b[j] =  a[i];
            j++;
        }
    }
    puts(b);
}
