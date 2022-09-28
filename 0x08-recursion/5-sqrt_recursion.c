#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to find square root
 * @c: number to be
 * Return: square root of n
 */
int sqrt_check(int n, int c);

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}

/**
 * sqrt_check - checks for natural square root
 * @c: number to find square root of
 * @n: guess at a square root
 * Return: square root of c
 */

int sqrt_check(int n, int c)
{
	if (n * n == c)
		return (n);
	if (n * n > c)
		return (-1);
	return (sqrt_check(n + 1, c));
}
