#include <stdio.h>
struct employee
{
    int id;
    int a;
    int s;
};
int highest(struct employee p[], int n)
{
    int i, max;
    max = p[0].s;
    for(i = 0; i < n; i++)
    {
        if(max < p[i].s) max = p[i].s;
    }
    return max;
}
main ()
{
    int n, i, h;
    printf("How many employees: ");
    scanf("%d", &n);
    struct employee ara[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter id of person %d: ", i+1);
        scanf("%d", &ara[i].id);
        printf("Enter age of person %d: ", i+1);
        scanf("%d", &ara[i].a);
        printf("Enter Salary of person %d: ", i+1);
        scanf("%d", &ara[i].s);
    }
    h = highest(ara, n);
    printf("%d", h);
}
