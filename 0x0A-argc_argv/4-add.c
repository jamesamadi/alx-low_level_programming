#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds two numerical arguments passed to the program
 * @argc: arguments counts
 * @argv: arguments vector
 * Return: 0 if successful
 **/

int main(int argc, char *argv[])
{
	int i, n1, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		n1 = atoi(argv[i]);
		sum += n1;
	}
	printf("%d\n", sum);
	return (0);
}
