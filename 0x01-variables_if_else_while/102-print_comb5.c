#include <stdio.h>
/**
 * main - Entry point
 *
 * Print: all possible combinations of two two-digit numbers
 *
 * Return: (0)
*/
int main(void)
{
	int firstDigit = 0, seconDigit;

	while (firstDigit <= 99)
	{
		seconDigit = firstDigit;
		while (seconDigit <= 99)
		{
			if (seconDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((seconDigit / 10) + 48);
				putchar((SeconDigit % 10) + 48);
				if (firstDigit != 98 || seconDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			SeconDigit++;
		}
		FirstDigit++;
	}
	putchar('\n');

	return (0);
}

