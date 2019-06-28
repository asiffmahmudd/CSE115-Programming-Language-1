#include <stdio.h>
int total(int a[], int n, int M)
{
    int i, c = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] >= M)
        {
            c++;
        }
    }
    return c;
}
main ()
{
    int X, N, i, count;
    printf("Enter X:");
    scanf("%d", &X);
    printf("How many numbers you want to enter: ");
    scanf("%d", &N);
    int ara[N];
    for(i = 0; i < N; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &ara[i]);
    }
    count = total(ara, N, X);
    printf("%d", count);
}
