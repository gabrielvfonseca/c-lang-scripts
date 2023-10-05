#include <stdio.h>

int main() {
    int number;
    int evenCount = 0;
    int oddCount = 0;

    printf("Enter numbers (enter 0 to stop):\n");

    while (1) {
        scanf("%d", &number);

        if (number == 0) {
            break; // Exit the loop when 0 is entered
        }

        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}
