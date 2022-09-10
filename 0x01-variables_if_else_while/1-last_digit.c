#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description - Prints if last digit is greater than five, zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dig = n % 10;
	/* your code goes there */
	if (last_dig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
	else if (last_dig == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_dig);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
	return (0);
}
