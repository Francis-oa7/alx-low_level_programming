#include <stdio.h>
/**
 * main - prints combination of numbers between 0-9
 * Return: Always 0 (Success)
 */

int main(void)
{
	int one;
	int tenth;

	for (tenth = 0; tenth <= 9; tenth++)
	{
		for (one = tenth +1; one <= 9; one++)
		{
			putchar(tenth + '0');
			putchar(one + '0');
			if (tenth < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
