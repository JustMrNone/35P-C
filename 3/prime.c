#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_prime(int num);
int main(int argc, char **argv)
{
    int n;
    if(argc > 1)
    {
        n = atoi(argv[1]);
    }
    else
    {
        scanf("%d", &n);
    }

    //printf("%i", n);

    if (!is_prime(n))
        printf("%i is not prime", n);
    
    else
    {
        printf("%i is prime.\n", n);
        printf("Prime numbers up to %i are: \n", n);
        for(int i = 2; i <= n; i++)
            if(is_prime(i))
                printf("%i\n", i);
    }

    return 0;
}

bool is_prime(int num)
{
    if (num <= 1) return false;
    for(int i = 2; i <= sqrt(num); i++)
        if(num % i == 0) return false;
    return true;
}