#include <stdio.h>
main ()
{
    int n, i, j;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for(j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
