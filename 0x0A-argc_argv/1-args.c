#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: arguments counts
 * @argv: arguments vector
 * Return: 1 if successful
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
