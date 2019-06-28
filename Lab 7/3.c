#include <stdio.h>
main()
{
    int i;
    char a[100];
    printf("Enter a word: ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        printf("%d\n", a[i]);
    }
}
