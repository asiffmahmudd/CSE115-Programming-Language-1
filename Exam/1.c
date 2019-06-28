#include <stdio.h>
int main ()
{
    int h, f, i;
    printf("Enter your height(in inches):");
    scanf("%d", &h);
    f = h/12;
    i = h%12;
    printf("Your height is %d feet %d inches", f, i);
    return 0;
}
