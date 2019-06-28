#include <stdio.h>
void r(int A[], int N, int V);
main()
{
    int V, N, i;
    printf("How many numbers you want to put in the array: ");
    scanf("%d", &N);
    int a[N];
    for(i = 0; i < N; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &a[i]);
    }
    printf("Enter V: ");
    scanf("%d", &V);
    r(a, N, V);
}
void r(int A[], int N, int V)
{
    int i, p = 0;
    for(i = 0; i < N; i++)
    {
        if(A[i] == V)
        {
            p = 1;
            break;
        }
    }
    if (p == 1)
    {
        for(i; i < N; i++)
        {
        A[i] = A[i+1];
        }
        A[N-1] = 0;
        for(i = 0; i < N; i++)
        {
        printf("%d\n", A[i]);
        }
    }
    else printf("%d is not in the array", V);
}
