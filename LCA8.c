#include <stdio.h>

int main() {
    int a, b, temp;
    int *p, *q;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    p = &a;
    q = &b;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("\nAfter swapping:");
    printf("\nFirst number = %d", a);
    printf("\nSecond number = %d", b);

    return 0;
}