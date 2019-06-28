#include <stdio.h>
int r(int A[], int N, int V);
main()
{
    int V, N, result, i;
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
    result = r(a, N, V);
    for(i = 0; i < N; i++)
    {
        printf("%d\n", a[i]);
    }
}
int r(int A[], int N, int V)
{
    int i;
    for(i = 0; i < N; i++)
    {
        if(A[i] == V)
        {
            break;
        }
    }
    for(i; i < N; i++)
    {
        A[i] = A[i+1];
    }
    A[N-1] = 0;
    return A[N];
}
