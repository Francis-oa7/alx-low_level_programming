#include "main.h"

/**
 * factorial - returns facttorial of a number
 * @n: number to be find factorial
 * Return: returns factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
