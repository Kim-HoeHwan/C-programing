#include <stdio.h>

void switchCase(char* str) 
{
    for (int i = 0; str[i] != '\0'; ++i) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] += 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] -= 32;
        }
    }
}

int main() 
{
    char input[1000];

    printf("Input> ");
    fgets(input, sizeof(input), stdin);

    switchCase(input);
    printf("Output> %s\n", input);

    return 0;
}
