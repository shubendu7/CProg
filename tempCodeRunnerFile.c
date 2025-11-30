#include <stdio.h>

// A parameterized macro to find the maximum of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10;
    int y = 21;

    // Using the MAX macro
    int result = MAX(x, y);

    printf("The maximum of %d and %d is %d\n", x, y, result);

    // Another example with different values
    int p = 50;
    int q = 30;
    printf("The maximum of %d and %d is %d\n", p, q, MAX(p, q));

    // Example with expressions
    printf("The maximum of (x + 5) and (y - 2) is %d\n", MAX(x + 5, y - 2));

    return 0;
}