#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char numbers[1024];
    int sum = 0;

    fgets(numbers, sizeof(numbers), stdin);

    for (int i = 0; numbers[i] != '\0' && numbers[i] != '\n'; i++)
    {        
        if(isdigit(numbers[i]))
        {
            sum += numbers[i] - '0';
        }
        else
        {
            printf("none digit");
            return 0;
        }


   }
    printf("%d", sum);
    return 0;
}