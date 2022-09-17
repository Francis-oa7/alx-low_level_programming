#include "main.h"

/**
 * _isdigit - checks if number is between 0 and 9
 * @c: number to be checked
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57 )
		return (1);
	else
		return (0);
}
