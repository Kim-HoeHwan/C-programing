#include<stdio.h>
int main()
{
	float a;
	printf("Please enter kilometers: ");
	scanf("%f", &a);
	float b = a / 1.6;
	printf("%.1f km is equal to %.1f miles.", a, b);
	return 0;
}
