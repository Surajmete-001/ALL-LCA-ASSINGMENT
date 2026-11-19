#include <stdio.h>

// With recursion
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Without recursion
unsigned long long factorial2(int n) {
    int i;
    unsigned long long f = 1;

    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int main() {
    int n;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Invalid input (Enter 0 to 20)");
        return 0;
    }

    printf("Factorial using recursion = %llu\n", factorial(n));
    printf("Factorial without recursion = %llu\n", factorial2(n));

    return 0;
}
