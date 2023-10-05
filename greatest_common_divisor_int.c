#include <stdio.h>

// Function to calculate the GCD using the Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    printf("Enter two integers to find their greatest common divisor:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 < 0 || num2 < 0) {
        printf("Both numbers should be non-negative.\n");
    } else {
        int result = gcd(num1, num2);
        printf("The greatest common divisor of %d and %d is %d.\n", num1, num2, result);
    }

    return 0;
}
