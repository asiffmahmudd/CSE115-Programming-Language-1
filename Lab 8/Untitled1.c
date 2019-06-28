#include <stdio.h>
main ()
{
    int i, j, r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int M[r][c], N[r][c], sum[r][c];
    printf("Enter first array elements: ");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    printf("Enter second array elements: ");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &N[i][j]);
        }
    }
    printf("First matrix:\n ");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix:\n ");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", N[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = M[i][j] + N[i][j];
        }
    }
    printf("Sum of two matrix:\n ");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

}
