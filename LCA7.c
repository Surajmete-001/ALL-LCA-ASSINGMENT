#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks[3], total;
};

int main() {
    struct Student s[10];
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i+1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        s[i].total = 0;
        for(j = 0; j < 3; j++) {
            printf("Enter marks: ");
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
    }

    printf("\n--- STUDENT RESULTS ---\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll Number: %d\nName: %s\nTotal: %.0f\nPercentage: %.0f%%\nResult: %s\n",
        s[i].roll, s[i].name, s[i].total,
        s[i].total / 3,
        s[i].total >= 120 ? "PASS" : "FAIL");
    }

    return 0;
}