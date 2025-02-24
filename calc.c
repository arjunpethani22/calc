#include <stdio.h>

// Function to display the menu
void displayMenu() {
    printf("\n--- Simple Calculator ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    double num1, num2, result;
    
    do {
        // Display the menu
        displayMenu();
        scanf("%d", &choice);

        // If user chooses to exit
        if (choice == 6) {
            printf("Thank you for using the calculator. Goodbye!\n");
            break;
        }

        // Input numbers
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        // Perform operation based on user choice
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error! Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
            case 5:
                if ((int)num2 == 0) {
                    printf("Error! Modulus by zero is not allowed.\n");
                } else {
                    printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
                }
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }

    } while (1); // Infinite loop until user exits

    return 0;
}
