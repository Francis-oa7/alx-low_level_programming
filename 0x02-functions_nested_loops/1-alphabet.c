#include "main.h"
/**
 * print_alphabet - prints lowercase alphabets
 */
void print_alphabet(void)
{
	char alph;
	
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
