#include <stdio.h>

void Binary(int n) 
{
    if (n <= 0) 
    {
        return; 
    }

    Binary(n / 2); 
    printf("%d", n % 2); 
}

int main() 
{
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);
    Binary(num);
   
    return 0;
}
