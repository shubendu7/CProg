// Fibonacci series upto n terms

#include <stdio.h>
int main() {
    int n, a = 0, b = 1, sum;
    printf("\nEnter the Nth term : ");
    scanf("%d", &n);  
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    printf("The series : ");
    if (n >= 1) {
        printf("%d", a);
    }
    if (n >= 2) {
        printf(" %d", b);
    }
    for (int i = 3; i <= n; i++) {  // Loop from 3 to n
        sum = a + b;
        printf(" %d", sum);
        a = b;
        b = sum;
    }
    printf("\n");
    return 0;
}
