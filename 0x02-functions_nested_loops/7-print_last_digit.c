#include "main.h"
/**
 * print_last_digit - prints last digit
 * @c: number to be printed
 * Return: Last number input into func
 */
int print_last_digit(int c)
{
	int last_d;

	if (n > 0)
	{
		last_d = (n * 10) * -1;
	}
	else
		last_d = n * 10;
	_putchar(last_d + '0');
	return (last_d);
}
