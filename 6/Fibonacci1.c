#include <stdio.h>
#include <stdlib.h>

int fibonacci(int x);

int main()
{
    int count;
    scanf("%i", &count);

    // Allocate memory for 'count' Fibonacci numbers
    int *res = malloc(count * sizeof(int));
    if (res == NULL)
        return 1;

    // Calculate and store Fibonacci numbers
    for (int i = 0; i < count; i++)
    {
        res[i] = fibonacci(i + 1);  // Call fibonacci function
    }

    // Print the results
    for (int j = 0; j < count; j++)
    {
        printf("%i ", res[j]);
    }
    
    printf("\n");

    // Free the allocated memory
    free(res);

    return 0;
}
// Function to compute the nth Fibonacci number
int fibonacci(int x)
{
    if (x == 1) 
        return 0;  // fib(1) = 0
    else if (x == 2) 
        return 1;  // fib(2) = 1

    int a = 0, b = 1, next;

    // Calculate Fibonacci numbers iteratively
    for (int i = 3; i <= x; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }

    return b;  // Return the Fibonacci number for the nth term
}
