#include <stdio.h>
main()
{
    int i, m, n;
    char a[100], b[100];
    printf("Enter a word: ");
    gets(a);
    printf("Enter another word: ");
    gets(b);
    for(i = 0; a[i] != '\0'; i++)
    {
        m = i;
    }
    for(i = 0; b[i] != '\0'; i++)
    {
        n = i;
    }
    if(m > n) puts(b);
    else puts(a);
}
