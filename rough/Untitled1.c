#include <stdio.h>
void inputmatrix(int r, int c, int a[r][c])
{
    int i, j;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void printmatrix(int r, int c, int a[r][c])
{
    int i, j;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void sum(int r, int c, int a[r][c], int b[r][c], int sum[r][c])
{
    int i, j;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printmatrix(r, c, sum);
}
main ()
{
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int m1[r][c], m2[r][c], s[r][c];
    inputmatrix(r, c, m1);
    inputmatrix(r, c, m2);
    printmatrix(r, c, m1);
    printmatrix(r, c, m2);
    sum(r, c, m1, m2, s);
}
