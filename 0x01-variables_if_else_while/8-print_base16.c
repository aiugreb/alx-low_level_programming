#include <stdio.h>

/**
 * main - Entry point
 *
 * Print: numbers of base16 in lowercase
 *
 * Return: (0)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

