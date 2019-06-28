main () {
    int h1, i1, h2, i2, h, i, d;
    printf("Enter the height of the first person \nFeet: ");
    scanf("%d", &h1);
    printf("Inch: ");
    scanf("%d", &i1);

    printf("Enter the height of the second person \nFeet: ");
    scanf("%d", &h2);
    printf("Inch: ");
    scanf("%d", &i2);

    d = (h1*12 + i1) - (h2*12 + i2);
    h = d/12;
    i = d%12;
    printf("The difference is %d feet %d inch", h, i);
}
