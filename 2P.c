#include <stdio.h>

void intSwap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ptrSwp(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const* argv[])
{


    int a = 1;
    int b = 2;

    int *p1 = &a;
    int *p2 = &b;

    printf("Before:\n");
    printf("a is %d and b is %d\n", a, b);
    intSwap(&a, &b);
    printf("After:\n");
    printf("a is %d and b is %d\n", a, b);

    printf("Before:\n");
    printf("p1 is %p and p2 is %p\n", p1, p2);
    ptrSwp(&p1, &p2);
    printf("After:\n");
    printf("p1 is %p and p2 is %p\n", p1, p2);

    return 0;
}
