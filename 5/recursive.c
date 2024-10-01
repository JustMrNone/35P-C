#include <stdio.h>
long long factorial(int n);
int main(void)
{
    int n; 
    scanf_s("%i", &n);
    if (n < 1)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    long long factorialans = factorial(n);
    printf("%lli", factorialans);
}

long long factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}