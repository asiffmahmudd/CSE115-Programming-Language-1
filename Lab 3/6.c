#include <stdio.h>
int main ()
{
    int n;
    float m, i;
    printf("Enter n: ");
    scanf("%d", &n);
    m = 1.00;
    i = 0;
    while(m <= n){
        i = i+(1/m);
        m++;

    }
    printf("%f", i);
    return 0;
}
