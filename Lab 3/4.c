#include <stdio.h>
int main ()
{
    int i = 1, n, m, max = 0;
    scanf("%d", &n);
    while (i <= n) {
        printf("Enter an integer: ");
        scanf("%d", &m);
        i++;
        if (m > max) {
            max = m;
        }
    }
    printf("%d", max);
    return 0;
}
