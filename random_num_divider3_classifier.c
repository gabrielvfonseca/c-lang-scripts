#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize the random number generator seed based on the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100 (you can adjust the range as needed)
    int randomNum = rand() % 100 + 1;

    // Check if the number is divisible by 3
    if (randomNum % 3 == 0) {
        printf("The random number %d is divisible by 3.\n", randomNum);
    } else {
        printf("The random number %d is not divisible by 3.\n", randomNum);
    }

    return 0;
}
