#include <stdio.h>

int main() {
    int choice;
    float amount, convertedAmount;

    printf("Currency Converter\n");
    printf("1. Euros to Dollars\n");
    printf("2. Dollars to Euros\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the amount in Euros: ");
        scanf("%f", &amount);
        convertedAmount = amount * 1.16;
        printf("%.2f Euros is equal to %.2f Dollars\n", amount, convertedAmount);
    } else if (choice == 2) {
        printf("Enter the amount in Dollars: ");
        scanf("%f", &amount);
        convertedAmount = amount / 1.16;
        printf("%.2f Dollars is equal to %.2f Euros\n", amount, convertedAmount);
    } else {
        printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
