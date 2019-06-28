main () {
    int b;
    float d, r, t;
    printf("Enter the basic salary: ");
    scanf("%d", &b);
    d = 0.4 * b;
    r = 0.2 * b;
    t = b + d + r;
    printf("Gross salary: %f", t);

}
