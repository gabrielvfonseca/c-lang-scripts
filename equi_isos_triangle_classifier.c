#include <stdio.h>

int main() {
    double side1, side2, side3;

    // Input sides from the user
    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);
    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);
    printf("Enter the length of side 3: ");
    scanf("%lf", &side3);

    // Check for the type of triangle
    if (side1 == side2 && side2 == side3) {
        printf("It's an equilateral triangle.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("It's an isosceles triangle.\n");
    } else {
        printf("It's a scalene triangle.\n");
    }

    return 0;
}
