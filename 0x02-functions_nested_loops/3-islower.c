#include "main.h"
/**
 * _islower - checks if letter is lowercase
 * Return: 1 on (Success) else 0
 * @c - Number to be checked
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
