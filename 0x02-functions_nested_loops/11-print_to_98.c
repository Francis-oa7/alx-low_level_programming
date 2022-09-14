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
		int i;

		while (i <= 98)
		{
			printf("%d", i);
			printf(", ");
			i++;
		}
	}
	else
	{
		int i = 0;

		while (i >= 98)
		{
			printf("%d", i);
			printf(", ");
			i--;
		}

	}
	printf("\n");
}
