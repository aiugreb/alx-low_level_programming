#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generate a keym depending on a username for crackme5
 * @argc: Number of arguments passed
 * @argv: array of string arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	char p[6], *l;
	int len = strlen(argv[1]), i, temp;

	(void)(argc);
	l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (len ^ 59) & 63;
	p[0] = l[temp];

	temp = 0;
	for (i = 0; i < len; i++)
		temp += argv[1][i];
	p[1] = l[(temp ^ 79) & 63];

	temp = 1;
	for (i = 0; i < len; i++)
		temp *= argv[1][i];
	p[2] = l[(temp ^ 85) & 63];

	temp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	p[3] = l[rand() & 63];

	temp = 0;
	for (i = 0; i < len; i++)
		temp += (argv[1][i] * argv[1][i]);
	p[4] = l[(temp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	p[5] = l[(temp ^ 229) & 63];

	p[6] = '\0';
	printf("%s", p);
	return (0);
}
