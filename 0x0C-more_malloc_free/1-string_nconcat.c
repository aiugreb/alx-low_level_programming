#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: int
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = n, tab;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (tab = 0; s1[tab]; tab++)
		i++;

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	i = 0;

	for (tab = 0; s1[tab]; tab++)
		s[i++] = s1[tab];

	for (tab = 0; s2[tab] && tab < n; tab++)
		s[i++] = s2[tab];

	s[i] = '\0';

	return (s);
}
