#include "main.h"

/**
 * _pow_recursion - returns the exponent of number
 * @x: base number
 * @y: exponent number
 * Return: x raised to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
