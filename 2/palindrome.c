#include <stdio.h>
#include <string.h>
int is_it_phil(char input[], int lenght);

int main(void)
{
    char intake[1024];
    fgets(intake, sizeof(intake), stdin);
    int len = strlen(intake);
    
    // remove the newline char added by fgets 
    if (intake[len - 1] == '\n') {
        intake[len - 1] = '\0';
        len--; // Adjust length
    }
    //debug statements
    //int res = is_it_phil(intake, len);
    

    //printf("%i", res);

    if (is_it_phil(intake, len))
    {
        printf("your string is indeed Palindrome.");
    }
    else
    {
        printf("provided string is not Palindrome.");
    }

}

int is_it_phil(char input[], int lenght)
{
    char phil[1024];
    
    for (int i = 0; i < lenght; i++)
    {
        phil[i] = input[lenght - i - 1];
    }

    phil[lenght] = '\0';

    if (strcmp(phil, input) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}