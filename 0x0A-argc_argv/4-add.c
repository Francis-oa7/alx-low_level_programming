#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i] < 48 && argv[i] > 57)
				printf("Error");
				return (1);
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else if (argc == 1)
		printf("0");
}
