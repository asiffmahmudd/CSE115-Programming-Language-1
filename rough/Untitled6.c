#include <stdio.h>
struct student
{
    char k[50];
    int id;
    float m;
    char g;
};
struct student grade(struct student x)
{
    char c;
    if(x.m >= 90) c = 'A';
    else if (x.m >= 80) c = 'B';
    else if (x.m >= 70) c = 'C';
    else if (x.m >= 60) c = 'D';
    else c = 'F';
    x.g = c;
    return x;
}
main ()
{
    struct student a;
    printf("Name: ");
    gets(a.k);
    printf("Enter id: ");
    scanf("%d", &a.id);
    printf("Enter marks: ");
    scanf("%f", &a.m);
    a = grade(a);
    printf("Name: %s\nId: %d\nGrade: %c",a.k, a.id, a.g);
}
