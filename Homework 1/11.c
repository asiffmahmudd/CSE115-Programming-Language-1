#include <stdio.h>
int main ()
{
    float d, m , f, i, c;
    printf("Enter the distance: ");
    scanf("%f", &d);
    m = d*1000;
    f = m*3.28;
    i = f*12;
    c = m*100;
    printf("Meters = %f\nFeet = %f\nInches = %f\nCentimeters = %f\n", m, f, i, c);
    return 0;
}
