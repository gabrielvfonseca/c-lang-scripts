#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation); // Note the space before %c to ignore whitespace.

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
            break;
    }

    return 0;
}
