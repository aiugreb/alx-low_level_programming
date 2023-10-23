#include "main.h"

/**
 * _strchr - main function
 * @s: Function parameter
 * @c: Function parameter
 * Return: NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{i
	if (s[i] == c)
	return (s + i);
	}
	return (NULL);
}
