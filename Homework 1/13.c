#include <stdio.h>
int main ()
{
    int s, h, r1, m, r2, s2;
    printf("Enter time in second: ");
    scanf("%d", &s);
    h = s/3600;
    r1 = s%3600;
    m = r1/60;
    r2 = r1%60;
    s2 = r2;
    printf("%d seconds is equivalent to %d hours, %d minutes and %d seconds", s, h, m, s2);
    return 0;
}
