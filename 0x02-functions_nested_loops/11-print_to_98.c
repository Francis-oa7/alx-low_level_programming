#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all integers n - 98
 * @n: number to begin with
 * Return: null
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 99; n--)
		{
			printf("%d", n);
			printf(", ");
		}
		printf("%d", 98)
	}
	else
	{
		for (; n <= 97; n++)
		{
			printf("%d", n);
			printf(", ");
		}
		printf("%d", 98);
	}
	printf("\n");
}
