#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("abc.txt", "w");

    fprintf(fp, "Hello World");

    fclose(fp);

    printf("File created successfully");

    return 0;
}