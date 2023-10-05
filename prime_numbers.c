#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 1 and numbers less than 1 are not prime
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // If the number is divisible by any number <= its square root, it's not prime
        }
    }
    
    return true; // If no divisors are found, the number is prime
}

int main() {
    int num;

    printf("Enter an integer to check if it's prime: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
