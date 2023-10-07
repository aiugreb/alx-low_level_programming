#include <stdio.h>
/**
 * main - Entry point
 *
 * Print: numbers from 0 to 9.
 *
 * Return: (0)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
