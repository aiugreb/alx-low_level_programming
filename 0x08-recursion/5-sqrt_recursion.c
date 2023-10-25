#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @n: number to calculate the square root of.
 * @i: square root
 * Return: the result of the square root
*/

int square_recursion(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_recursion(n, 0));
}
/**
 * square_recursion - find the natural
 * @n: number to calculate the square root of.
 * @i: iterator
 * Return: the result of the square root
*/
int square_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (square_recursion(n, i + 1));
}
