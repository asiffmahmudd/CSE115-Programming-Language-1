#include <stdio.h>
main()
{
    int i, j, n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Pattern 1:\n");
    for(i = 1; i <= n; i++)
    {
        for(j = i; j <= n-1; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\nPattern 2:\n");
    for(i = 1; i <= n; i++)
    {
        for(j = n; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
