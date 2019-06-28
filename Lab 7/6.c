#include <stdio.h>
main ()
{
    int i, j, m, n;
    char a[100], b[50];
    printf("Enter first potion: ");
    gets(a);
    printf("Enter second portion: ");
    gets(b);
    m = strlen(a);
    for(i = 0; i < strlen(b); i++)
    {
        a[m+i] = b[i];
    }
    a[m+i]= '\0';
    printf("%s", a);
}
