#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: pointer to the array
 * @n: number of elements to be printed
 * Return: null
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i + 1 != n)
			printf(", ");
	}

	printf("\n");
}
