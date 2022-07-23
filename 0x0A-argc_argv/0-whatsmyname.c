#include <stdio.h>

/**
 * main - Prints its name, followed by a new line.
 * @argc: Number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
