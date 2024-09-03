#include <stdio.h>

int main (void)
{
	int num, digits;

	printf("Enter number here: ");
	scanf("%d", &num);

	if (num < 10)
		digits = 1;
	else if (num < 100)
		digits = 2;
	else if (num < 1000)
		digits = 3;
	else if (num < 10000)
		digits = 4;
	else if (num < 100000)
		digits = 5;
	else if (num < 1000000) 
		digits = 6;
	else {
		printf("I don't know lol\n"); return 0; }
	
	printf("Digits: %d\n", digits);

	return 0;
}
