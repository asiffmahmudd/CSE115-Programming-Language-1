#include <stdio.h>
int perfect(int N)
{
    int i, m = 0;
    for (i = 1; i < N; i++)
    {
        if (N % i == 0)
        {
            m = m + i;
        }
    }
    if (m == N) return 1;
    else return 0;
}
main ()
{
    int x, result;
    printf("Enter an integer: ");
    scanf("%d", &x);
    result = perfect(x);
    if (result == 1) printf("YES");
    else printf("NO");
}
