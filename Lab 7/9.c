#include <stdio.h>
void rightrotate(int a[], int n);
main ()
{
    int n;
    int x[] = {5,1,3,7,2};
    n = 5;
    rightrotate(x, n);
}
void rightrotate(int a[], int n)
{
    int i, t;
    t = a[4];
    for(i = 1; i < 5; i++)
    {
        a[5-i] = a[4-i];
    }
    a[0] = t;
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
}
