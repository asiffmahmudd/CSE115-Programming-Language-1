main ()
{
    int a = 50, b = 0;
    int *a_p = &a;
    int *b_p = &b;
    b = a+*b_p;
    a_p = b_p;
    a = (*a_p)*(*b_p);
    *b_p = a/b;

    printf("a = %d\nb = %d\na_p = %d\nb_p = %d\n", a, b, a_p, b_p);
}
