#include <stdio.h>
#include <string.h>
char *cipher(int num, char *character);
int main()
{
    int n; 
    char string[1024];
    printf("Enter a positive integer: ");

    scanf_s("%i", &n);
    getchar(); // To consume the newline character after scanf
    
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    // Remove the newline character from the string if it exists
    size_t len = strlen(string);
    if (len > 0 && string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }
    char *encrypted = cipher(n, string);
    printf("Encrypted string: %s", encrypted);

    return 0;

}

char *cipher(int num, char *character)
{
    for(int i = 0; i < strlen(character); i++)
    {
        if(character[i] >= 'A' && character[i] <= 'Z')
            character[i] = ((character[i] - 'A' + num) % 26 + 'A');
        else if(character[i] >= 'a' && character[i] <= 'z')
            character[i] = ((character[i] - 'a' + num) % 26 + 'a'); 

    }
    return character;
}