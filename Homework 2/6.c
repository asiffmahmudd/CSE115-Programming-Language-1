#include <stdio.h>
int main ()
{
    int n;
    float x, y;
    printf("Enter the number of clothes: ");
    scanf("%d", &n);
    if(n>=1 && n<=5){
        x = n*100*0.05;
        y = n*100 - x;
    }
    else if(n>=6 && n<=10){
        x = n*100*0.1;
        y = n*100 - x;
    }
    else if(n>10){
        x = n*100*0.15;
        y = n*100 - x;
    }
    printf("Total price: %f", y);
    return 0;
}
