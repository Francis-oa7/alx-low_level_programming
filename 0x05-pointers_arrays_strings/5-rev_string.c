#include "main.h"
/**
 * print_rev -  reverse of a string
 * @s: pointer to string to be reversed
 * Return: null
 */
void print_rev(char *s)
{
	int i = 0;
	int j;
	int right;

	while (s[i])
		i++;
	j = i / 2;
	right = 0;

	while (right != j)
	{
		char temp = s[right];
		int left = i - right - 1;
		s[right] = s[left];
		s[left] = temp;

		right++;
	}
}
