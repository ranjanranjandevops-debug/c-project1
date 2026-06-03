#include <stdio.h>

// Tell the compiler that these functions exist in your other files
void biggest();
void factorial();
void reverse();

int main() {
    int choice;

    printf("===============================\n");
    printf("       C PROJECT MENU          \n");
    printf("===============================\n");
    printf("1. Find the Largest of Two Numbers\n");
    printf("2. Calculate Factorial\n");
    printf("3. Reverse a String\n");
    printf("-------------------------------\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            biggest();
            break;
        case 2:
            factorial();
            break;
        case 3:
            reverse();
            break;
        default:
            printf("Invalid choice! Please run the program again.\n");
    }

    return 0;
}
