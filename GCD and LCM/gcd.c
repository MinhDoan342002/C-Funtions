#include <stdio.h>

// Function to find the GCD of two numbers using the Euclidean algorithm
int find_gcd(int a, int b) {
    int higher, lower, quotient, remainder;

    // Determine the higher and lower values
    higher = (a > b) ? a : b;
    lower = (a > b) ? b : a;

    // Initialize remainder to enter the loop
    remainder = higher % lower;

    // Perform the Euclidean algorithm to find the GCD
    while (remainder != 0) {
        quotient = higher / lower;     // Integer division
        remainder = higher % lower;    // Remainder

        // Update values for the next iteration
        higher = lower;
        lower = remainder;
    }

    // When remainder becomes 0, `higher` holds the GCD
    return higher;
}

