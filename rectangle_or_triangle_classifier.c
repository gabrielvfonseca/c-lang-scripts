#include <stdio.h>

int main() {
    float a, b, c;

    // Input the lengths of the three line segments
    printf("Enter the lengths of three line segments: \n");
    scanf("%f %f %f", &a, &b, &c);

    // Check if they can form a right triangle
    if (a > 0 && b > 0 && c > 0) {
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
            printf("These line segments can form a right triangle.\n");
        } else {
            printf("These line segments cannot form a right triangle.\n");
        }
    } else {
        printf("Invalid input. Lengths of line segments must be positive.\n");
    }

    return 0;
}
