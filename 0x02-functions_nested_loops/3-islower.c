#include "main.h"

/**
 * _islower - function to check if char is lowercase
 * @c: check function
 * Return: 1 if char is lowercase, otherwise 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
