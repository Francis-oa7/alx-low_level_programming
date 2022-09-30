#include <stdio.h>

/**
 * main - the main function
 * @argc: argument count
 * @argv: an array of string arguments
 * Return: 0 on success 1 otherwise 
 */

int main(int argc, char *argv[])
{
    argc++;
    printf("%s\n", argv[0]);
    return (0);
}