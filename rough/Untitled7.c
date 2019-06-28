#include <stdio.h>
struct student
{
    char n[50];
    int id;
    float m;
};
struct student highest(struct student p[], int k)
{
    int i, l;
    float max;
    max = p[0].m;
    for(i = 1; i < k; i++)
    {
        if(max < p[i].m)
        {
            l = i;
            max = p[i].m;
        }
    }
    return p[l];
}
main ()
{
    int x, i;
    printf("How many students?: ");
    scanf("%d", &x);
    struct student a[x];
    for(i = 0; i < x; i++)
    {
        printf("Name: ");
        gets(a[i].n);
        printf("Id: ");
        scanf("%d", &a[i].id);
        printf("Marks: ");
        scanf("%f", &a[i].m);
    }
    a[i] = highest(a, x);
    printf("ID: %d\nMarks: %f", a[i].id, a[i].m);
}
