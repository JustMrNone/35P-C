#include <stdio.h>
#include <string.h>

#define MAX 1000

void reverse(char s[]);

int main()
{
    int character;
    char list[MAX];
    int i;
    
    for(i = 0; i < MAX-1 && (character = getchar()) != EOF; i++)
    {
        if(character == '\n')
        {
            list[i] = '\0'; // Null-terminate the string
            reverse(list);  // Reverse and print the string
            i = -1; //reset the i for next word
        }
        else
        {
            list[i] = character;
        }
    }
    if (i > 0) {
        list[i] = '\0';         // Null-terminate the last string
        reverse(list);          // Reverse and print the last string
    }
    return 0;
}
void reverse(char s[])
{
    int len = strlen(s);

    char revlist[MAX];
    for(int i = 0; i < len; i++)
    {
        revlist[i] = s[len - i - 1];
    }
    revlist[len] = '\0';
    printf("%s\n", revlist);
}