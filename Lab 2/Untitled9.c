#include <stdio.h>
int main ()
{
    float x, y, m, n, r, d, r1;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Enter x coordinate of center: ");
    scanf("%f", &m);
    printf("Enter y coordinate of center: ");
    scanf("%f", &n);
    printf("Enter x coordinate of the point: ");
    scanf("%f", &x);
    printf("Enter y coordinate of the point: ");
    scanf("%f", &y);

    d = (m-x)*(m-x) + (n-y)*(n-y);
    r1 = r*r;
    if(d>r1){
        printf("Outside the circle");
    }
    else if (d<r1) {
        printf("Inside the circle");
    }
    else {
        printf("On the circle");
    }
    return 0;
}
