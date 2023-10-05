#include <stdio.h>

int main() {
    int n, i;
    long long int fib[100]; // Using long long to accommodate large Fibonacci numbers

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Initialize the first two Fibonacci numbers
    fib[0] = 0;
    fib[1] = 1;

    // Generate the Fibonacci sequence
    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Display the first n Fibonacci numbers
    printf("Fibonacci Sequence (first %d numbers):\n", n);
    for (i = 0; i < n; i++) {
        printf("%lld", fib[i]);

        if (i < n - 1) {
            printf(", ");
        } else {
            printf("\n");
        }
    }

    return 0;
}
