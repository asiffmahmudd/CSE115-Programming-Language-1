#include <stdio.h>
int main ()
{
    int u;
    float b, c;
    printf("Enter unit charges: ");
    scanf("%d", &u);
    if (u <= 50){
        b = u*0.50;
    }
    else if (u <= 150 && u > 50) {
        b = 50*0.50 + (u-50)*0.75;
    }
    else if (u <= 250 && u > 150){
        b = 50*0.50 + 100*0.75 + (u-150)*1.20;
    }
    else {
        b = 50*0.50 + 100*0.75 + 100*1.50 + (u-250)*1.50;
    }
    c = b * 0.2 + b;
    printf("Bill = %f", c);

    return 0;
}
