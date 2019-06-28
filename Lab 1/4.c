main () {
    int m1, m2, m3, t;
    float a;
    printf("Enter subject 1 mark: ");
    scanf("%d", &m1);
    printf("Enter subject 2 mark: ");
    scanf("%d", &m2);
    printf("Enter subject 3 mark: ");
    scanf("%d", &m3);
    t = m1 + m2 + m3;
    a = t/3.00;
    printf("The total is %d\n", t);
    printf("Average is %0.2f", a);

}
