#include <stdio.h>

int main() {
    int choice;
    float x, y, Result;
    char again;

    do {

    printf("MENU\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");

    printf("Enter Your Choices(1-4):");
    if (scanf("%d",&choice) != 1) {
        printf("Error: Please enter a number");
        return 1; 
    }
    printf("Enter Two Numbers:");
    if(scanf("%f%f",&x,&y) != 2 ) {
        printf("Error: Please enter a number");
        return 1;
    }
    switch (choice) {
        case 1:
            Result = x+y;
            printf("Addtion is = %f\n", Result);
            break;
        case 2:
            Result = x-y;
            printf("Subtraction is = %f\n", Result);
            break;
        case 3:
            Result = x*y;
            printf("Multiplication is = %f\n", Result);
            break;
        case 4:
            if(y != 0.0) {
                Result = x=y;
                printf("Division is =%f\n",Result);
            }
            else {
                printf("Error: Division by zero \n");
            }
            break;
        default:
            printf("Invalid Choice\n");
    }

        printf("Do you want to continue (Y/N)? \n");
        scanf(" %c", &again);

        } while (again == 'Y' || again == 'y');

        printf("Thanks for using me!\n");

    return 0;
}