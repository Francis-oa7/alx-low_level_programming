#include "main.h"

/**
 * reverse_array - reverses a string
 * @a: pointer to string
 * @n: number of elements in array
 * Return: Null
 */

void reverse_array(int *a, int n)
{
	int i, b, c;

	for (i = 0, b = (n - 1); i < b; i++, b--)
	{
		c = a[i];
		a[i] = a[b];
		a[b] = c;
	}
}
