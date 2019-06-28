#include <stdio.h>
int main ()
{
    int s;
    float a, h, i, t;
    printf("Enter the basic salary: ");
    scanf("%d", &s);
    a = s*0.4;
    h = s*0.2;
    i = s*0.1;
    t = s + a + h - i;
    printf("Salary each month: %f", t);
    return 0;
}
