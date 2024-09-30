#include <stdio.h>
#include <stdlib.h>
#include "gcd.h"

// Function to calculate the LCM of two numbers
int find_lcm(int a, int b) {
    // LCM formula: abs(a * b) / GCD(a, b)
    return abs(a * b) / find_gcd(a, b);
}
