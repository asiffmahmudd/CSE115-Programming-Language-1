#include <stdio.h>
int main ()
{
    int n,i;
    printf("Enter n: ");
    scanf("%d", &n);
    i = 1;
    while(i <= n){
        if(i%13 != 0){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
