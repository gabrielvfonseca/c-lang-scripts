#include <stdio.h>

int main() {
    double kilometers, miles;

    // Input distance in kilometers
    printf("Enter the distance in kilometers: ");
    scanf("%lf", &kilometers);

    // Convert kilometers to miles
    miles = kilometers / 1.609;

    // Check if the distance is greater than 5000 kilometers
    if (kilometers > 5000) {
        printf("Very far\n");
    }

    // Display the result
    printf("%.2lf kilometers is equal to %.2lf miles\n", kilometers, miles);

    return 0;
}
