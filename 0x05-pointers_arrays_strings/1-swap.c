#include "main.h"
/**
 * swap_int - changes address of integers
 * @a: Integer to swap
 * @b: Other integer to swap
 * Return: null
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
