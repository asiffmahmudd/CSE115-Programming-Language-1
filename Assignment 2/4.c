#include <stdio.h>
void search(int A[], int N, int M);
main()
{
    int i, N, M;
    printf("How many numbers you want to put in the array: ");
    scanf("%d", &N);
    int a[N];
    for(i = 0; i < N; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &a[i]);
    }
    printf("Enter M: ");
    scanf("%d", &M);
    search(a, N, M);
}
void search(int A[], int N, int M)
{
    int i, p = 0;
    for(i = 0; i < N; i++)
    {
        if(A[i] == M)
        {
            p = 1;
            break;
        }
    }
    if(p == 1) printf("%d is in the array", M);
    else printf("%d is not in the array", M);
}
