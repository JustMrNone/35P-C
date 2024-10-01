#include <stdio.h>
#include <ctype.h>


int main(void)
{
    int a, sum = 0; 


    if(scanf("%i", &a) == 1)
    {
        while (a != 0)
        {
            sum += a % 10;
            a /= 10;
        }
    }
    else
    {
        printf("Invalid input");
        return 0;
    }

    printf("%i", sum);
}
