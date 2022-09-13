#include "main.h"
/**
 * print_alphabet - prints lowercase alphabets 10x
 */
void print_alphabet_10x(void)
{
	int i = 0;

	while (i < 10)
	{
		char alph;
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		i++;
	}
	_putchar('\n');
}
