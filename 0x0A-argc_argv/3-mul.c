#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, total;

	total = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			total *= atoi(argv[i]);
		printf("%d\n", total);
		return (0);
	}
	else
	{	printf("Error\n");
		return (1);
	}
}
