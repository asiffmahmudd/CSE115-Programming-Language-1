#include <stdio.h>
int main ()
{
    int w1, w2, l1, l2, d;
    printf("Enter the width of the first bedroom: ");
    scanf("%d", &w1);
    printf("Enter the length of the first bedroom: ");
    scanf("%d", &l1);
    printf("Enter the width of the second bedroom: ");
    scanf("%d", &w2);
    printf("Enter the length of the second bedroom: ");
    scanf("%d", &l2);

    d = (w2*l2) - (w1*l1);
    printf("The size difference of two bedrooms is: %d square feet", d);

    return 0;
}
