#include <stdio.h>

int main(int argc, char const* argv[])
{

    int a,b, *p1, *p2, *p3;

    printf("a\tb\tp1\t\tp2\t\tp3\n");
    a = 42;
    printf("%d\t%d\t%p\t%p\t%p\n", a, b, p1, p2, p3);
    b = 38;
    printf("%d\t%d\t%p\t%p\t%p\n", a, b, p1, p2, p3);
    p1 = &a;
    printf("%d\t%d\t%p\t%p\t%p\n", a, b, p1, p2, p3);
    p2 = &b;
    printf("%d\t%d\t%p\t%p\t%p\n", a, b, p1, p2, p3);
    *p1 = 77;
    printf("%d\t%d\t%p\t%p\t%p\n", a, b, p1, p2, p3);
    *p2 = 44;
    printf("%d\t%d\t%p\t%p\t%p\n", a, b, p1, p2, p3);
    p3 = p1;
    printf("%d\t%d\t%p\t%p\t%p\n", a, b, p1, p2, p3);
    p1 = p2;
    printf("%d\t%d\t%p\t%p\t%p\n", a, b, p1, p2, p3);
    p2 = p3;
    printf("%d\t%d\t%p\t%p\t%p\n", a, b, p1, p2, p3);
    return 0;
}
