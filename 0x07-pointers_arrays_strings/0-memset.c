#include "main.h"
/**
 * memset - main function of the prototype
 * @b: The value used to fill the memory
 * @s: Function paramater
 * @n: Function parameter
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n);
{
	char *ptr = s;

	for(unsigned int i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}
