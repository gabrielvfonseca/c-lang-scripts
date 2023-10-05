#include <stdio.h>

// Function to calculate the greatest common divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// Function to calculate the least common multiple (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two integers to find their least common multiple:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Both numbers should be positive integers.\n");
    } else {
        int result = lcm(num1, num2);
        printf("The least common multiple of %d and %d is %d.\n", num1, num2, result);
    }

    return 0;
}
