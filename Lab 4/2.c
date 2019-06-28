#include <stdio.h>
int main ()
{
    int a, n, i, x = 1, sum = 0;
    printf("Enter a and n: ");
    scanf("%d %d", &a, &n);

    for(i = 0; i <= n; i++)
    {
        sum = sum + x *(a-i)*(a-i);
        x = x*(-1);
    }
    printf("%d\n", sum);
    return 0;
}
