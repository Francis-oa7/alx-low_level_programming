#include "main.h"

/**
 * check_prime - checks for prime numbers
 * @f: factor check
 * @p: probable prime number
 * Return: 1 if num is prime else 0
 */

int check_prime(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (prime_check(f + 1, p));
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to be checked
 * Return: 1 if number is prime else 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
