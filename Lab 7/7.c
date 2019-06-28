#include <stdio.h>
int sum(int s)
{
    int i, m = 0;
    for(i = 0; i < 5; i++)
    {
        m = m + s%10;
        s = s/10;
    }
    return m;
}
main ()
{
    int x, r;
    printf("Enter a five digit positive integer: ");
    scanf("%d", &x);
    r = sum(x);
    printf("%d", r);
}
