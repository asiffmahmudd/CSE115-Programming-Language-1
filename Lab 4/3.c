#include <stdio.h>
int main ()
{
    int n, i, s, l, p = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            s = i;
            l = n/s;
            p = 0;
            break;
        }
    }
    if (p == 1)
    {
        printf("Prime number");
    }
    else
    {
    printf("Largest: %d & Smallest: %d", l, s);
    }
    return 0;
}
