#include "main.h"
#include <stdlib.h>

/**
 * count_word - helper function to count the number
 * @s: string
 * Return: number of words
*/

int count_word(char *s)
{
		int i, j, k;

		i = 0;
			k = 0;

		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == ' ')
				i = 0;
			else if (i == 0)
			{
				i = 1;
				k++;
			}
		}
		return (k);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
*/

char **strtow(char *str)
{
	char **strt, *tmp;
	int i, j = 0, len = 0, k, l = 0, m, n;

	while (*(str + len))
		len++;

	k = count_word(str);

	if (k == 0)
		return (NULL);

	strt = (char **) malloc(sizeof(char *) * (k + 1));

	if (strt == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (l)
			{
				n = i;
				tmp = (char *) malloc(sizeof(char) * (l + 1));
				if (tmp == NULL)
					return (NULL);
				while (m < n)
					*tmp++ = str[m++];
				*tmp = '\0';
				strt[j] = tmp - l;
				j++;
				l = 0;
			}
		}
		else if (l++ == 0)
			m = i;
	}
	strt[j] = NULL;
	return (strt);
}
