#include <stdio.h>

int main() {
    int sum = 0;
    int count = 0;
    int number = 2; // Start with the first positive even number

    while (count < 20) {
        sum += number;
        number += 2; // Increment by 2 to get the next even number
        count++;
    }

    printf("The sum of the first 20 positive even numbers is: %d\n", sum);

    return 0;
}
