#include <stdio.h>
int main ()
{
    float a, b, c, x1, x2;
    printf("Enter a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    if(b*b-4*a*c >= 0) {
        x1 = (-1*b + sqrt(b*b-4*a*c))/(2*a);
        x2 = (-1*b - sqrt(b*b-4*a*c))/(2*a);
        printf("%f %f", x1, x2);
    }
    else{
        printf("It has complex roots");
    }

    return 0;
}
