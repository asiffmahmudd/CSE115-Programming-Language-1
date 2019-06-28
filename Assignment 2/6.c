#include <stdio.h>
void right_rotate(int A[], int N);
main ()
{
    int N, i;
    printf("How many numbers you want to enter: ");
    scanf("%d", &N);
    int a[N];
    for(i = 0; i < N; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &a[i]);
    }
    right_rotate(a, N);
}
void right_rotate(int A[], int N)
{
    int i;
    for(i = N-1; i >= 0; i--)
    {
        A[i] = A[i-1];
    }
    for(i = 0; i < N; i++)
    {
        printf("%d\n", A[i]);
    }
}
