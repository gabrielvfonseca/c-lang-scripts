#include <stdio.h>

int main() {
    double num1, num2;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Check which number is smaller
    if (num1 < num2) {
        printf("The smaller number is %.2lf\n", num1);
    } else if (num2 < num1) {
        printf("The smaller number is %.2lf\n", num2);
    } else {
        printf("The numbers are equal.\n");
    }

    return 0;
}
