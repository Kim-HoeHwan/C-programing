#include <stdio.h>

int main() 
{
    int numbers[5];
    int oddNumbers[5];
    int evenNumbers[5];
    int oddCount = 0;
    int evenCount = 0;

    printf("Please input five integers: ");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++) 
    {
        if (numbers[i] % 2 == 0) 
        {
            evenNumbers[evenCount] = numbers[i];
            evenCount++;
        }
        else 
        {
            oddNumbers[oddCount] = numbers[i];
            oddCount++;
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < oddCount; i++) 
    {
        printf("%d ", oddNumbers[i]);
    }
    printf("\n");

    printf("Even numbers: ");
    for (int i = 0; i < evenCount; i++) 
    {
        printf("%d ", evenNumbers[i]);
    }
    printf("\n");

    return 0;
}
