#include <stdio.h>
int main ()
{
    int n = 8;
    while(n < 1 || n >7){
        printf("Enter a number between 1 and 7: ");
        scanf("%d", &n);
    }
    switch(n) {
        case 1: printf("Sunday");
                break;
        case 2: printf("Monday");
                break;
        case 3: printf("Tuesday");
                break;
        case 4: printf("Wednesday");
                break;
        case 5: printf("Thursday");
                break;
        case 6: printf("Friday");
                break;
        case 7: printf("Saturday");
                break;
    }
    return 0;
}
