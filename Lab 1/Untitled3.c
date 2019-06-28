main () {
    int h;
    float s;
    scanf("%d", &h);
    if (h<=40)
        s = h * 10;
    else
       s = 40 * 10 + (h - 40) * 10 * 1.5;
    printf("%f", s);
}
