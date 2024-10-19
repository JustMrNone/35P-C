#include <stdio.h>
#include <stdlib.h>


int fibonacci(int x);


int main()
{
    int count;   
    scanf("%i", &count);

    int *res = malloc(count * sizeof(int));
    if(res == NULL)
        return 1;

    for (int i = 0; i < count; i++)
    {
        res[i] = fibonacci(i + 1);
    }

    for (int j = 0; j < count; j++)
    {
        printf("%i ", res[j]);
    }
    
    printf("\n");

    free(res);

    return 0;

}

int fibonacci(int x)
{
    int *fib = malloc(x * sizeof(int));
    if(fib == NULL)
        return 1;

    fib[0] = 0;
    if(x > 1)
        fib[1] = 1;    

    for(int i = 2; i < x; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int result = fib[x - 1];
    free(fib);
    return result;

}
