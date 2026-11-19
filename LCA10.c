#include <stdio.h>

int main() {
    int year, days, start = 1, i, j, month;
    char *months[] = {"January", "February", "March", "April",
                      "May", "June", "July", "August",
                      "September", "October", "November", "December"};

    int mdays[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    printf("Enter year: ");
    scanf("%d", &year);

    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        mdays[1] = 29;

    printf("\nCalendar of %d\n", year);

    for(month = 0; month < 12; month++) {
        printf("\n\n      %s\n", months[month]);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for(i = 0; i < start; i++)
            printf("    ");

        for(j = 1; j <= mdays[month]; j++) {
            printf("%3d ", j);

            if((j + start) % 7 == 0)
                printf("\n");
        }

        start = (start + mdays[month]) % 7;
    }

    return 0;
}