#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], s[10][10];
    int i, j, r, c;

    printf("Enter rows and columns: ");
    if (scanf("%d%d", &r, &c) != 2 ||
        r < 1 || r > 10 || c < 1 || c > 10) {
        printf("Invalid choice!");
        return 0;
    }

    printf("Enter first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (scanf("%d", &a[i][j]) != 1) {
                printf("Invalid choice!");
                return 0;
            }

    printf("Enter second matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (scanf("%d", &b[i][j]) != 1) {
                printf("Invalid choice!");
                return 0;
            }

    printf("Sum of matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            s[i][j] = a[i][j] + b[i][j];
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}