#include <stdio.h>
int main ()
{
    int c;
    float f;
    printf("Enter celsius: ");
    scanf("%d", &c);
    f = (9*c)/5 + 32;
    printf("%f", f);
    return 0;
}
