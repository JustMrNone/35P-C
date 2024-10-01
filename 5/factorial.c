#include <stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf_s("%i", &n); // Pass the address of n

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Exit the program with an error code
    }

    long long factorial = 1; // Use long long for larger values

    for (int i = 1; i <= n; i++) // Loop from 1 to n
        factorial *= i; // Multiply i to factorial

    printf("Factorial of %i is %lld\n", n, factorial); // Print result using %lld for long long
    return 0;
}
