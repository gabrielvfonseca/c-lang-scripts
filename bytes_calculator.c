#include <stdio.h>

int main() {
    long long bytes; // Declare a variable to store the number of bytes.
    printf("Enter the number of bytes: "); // Prompt the user for input.
    scanf("%lld", &bytes); // Read the input and store it in the 'bytes' variable.

    if (bytes < 0) { // Check if the input is negative.
        printf("Please enter a non-negative value.\n"); // Print an error message.
        return 1; // Exit the program with an error code.
    }

    if (bytes < 1024) { // Check if the input is less than 1024 bytes.
        printf("%lld bytes\n", bytes); // Print the number of bytes.
    } else if (bytes < 1024 * 1024) { // Check if the input is less than 1 MB (1024 KB).
        printf("%.2f KB\n", (double)bytes / 1024); // Print the size in kilobytes.
    } else if (bytes < 1024 * 1024 * 1024) { // Check if the input is less than 1 GB (1024 MB).
        printf("%.2f MB\n", (double)bytes / (1024 * 1024)); // Print the size in megabytes.
    } else if (bytes < 1024LL * 1024 * 1024 * 1024) { // Check if the input is less than 1 TB (1024 GB).
        printf("%.2f GB\n", (double)bytes / (1024 * 1024 * 1024)); // Print the size in gigabytes.
    } else { // If the input is larger than 1 TB.
        printf("%.2f TB\n", (double)bytes / (1024LL * 1024 * 1024 * 1024)); // Print the size in terabytes.
    }

    return 0; // Exit the program with a success code.
}
