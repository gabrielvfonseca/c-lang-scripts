#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: 0! = 1
    } else {
        return n * factorial(n - 1); // Recursive case: n! = n * (n-1)!
    }
}

int main() {
    int num;

    printf("Enter an integer to calculate its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is undefined for negative numbers.\n");
    } else {
        int result = factorial(num);
        printf("%d! = %d\n", num, result);
    }

    return 0;
}
