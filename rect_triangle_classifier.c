#include <stdio.h>
#include <math.h>

int main() {
    double side1, side2, side3;

    // Input the dimensions of the triangle sides
    printf("Enter the length of the first side: ");
    scanf("%lf", &side1);
    printf("Enter the length of the second side: ");
    scanf("%lf", &side2);
    printf("Enter the length of the third side: ");
    scanf("%lf", &side3);

    // Sort the sides in ascending order
    double sides[3] = {side1, side2, side3};
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (sides[i] > sides[j]) {
                double temp = sides[i];
                sides[i] = sides[j];
                sides[j] = temp;
            }
        }
    }

    // Check if it's a right triangle using the Pythagorean theorem
    if (fabs(pow(sides[0], 2) + pow(sides[1], 2) - pow(sides[2], 2)) <= 0.01) {
        printf("It is a right triangle.\n");
    } else {
        printf("It is not a right triangle.\n");
    }

    return 0;
}
