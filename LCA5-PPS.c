#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[100], b[100];
    int ch, i;

    do {
        printf("\n\n1.Length  2.Copy  3.Concat  4.Compare");
        printf("\n5.Reverse  6.Uppercase  7.Lowercase  8.Exit");
        printf("\nEnter choice: ");

        if (scanf("%d", &ch) != 1) {
            printf("Invalid choice!");
            while (getchar() != '\n');
            continue;
        }
        getchar();

        if (ch < 1 || ch > 8) {
            printf("Invalid choice!");
            continue;
        }

        if (ch >= 1 && ch <= 7) {
            printf("Enter string: ");
            fgets(a, sizeof(a), stdin);
            a[strcspn(a, "\n")] = '\0';
        }

        switch(ch) {
            case 1:
                printf("Length = %zu", strlen(a));
                break;

            case 2:
                strcpy(b, a);
                printf("Copy = %s", b);
                break;

            case 3:
                printf("Enter second string: ");
                fgets(b, sizeof(b), stdin);
                b[strcspn(b, "\n")] = '\0';
                strcat(a, b);
                printf("Concatenation = %s", a);
                break;

            case 4:
                printf("Enter second string: ");
                fgets(b, sizeof(b), stdin);
                b[strcspn(b, "\n")] = '\0';
                printf("%s", strcmp(a, b) == 0 ?
                       "Equal" : "Not equal");
                break;

            case 5:
                for(i = (int)strlen(a) - 1; i >= 0; i--)
                    putchar(a[i]);
                break;

            case 6:
                for(i = 0; a[i]; i++)
                    a[i] = toupper((unsigned char)a[i]);
                printf("%s", a);
                break;

            case 7:
                for(i = 0; a[i]; i++)
                    a[i] = tolower((unsigned char)a[i]);
                printf("%s", a);
                break;

            case 8:
                printf("Exiting...");
                break;
        }

    } while(ch != 8);

    return 0;
}