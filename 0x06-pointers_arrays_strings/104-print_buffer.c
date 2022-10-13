#include "main.h"
#include <stdio.h>
/**
 * print_buffer(char *b, int size) - adds some numbers
 * @b: holds some strings
 * @size: holds some strings
 * Return: void if successful
 */

void print_buffer(char *b, int size)
{
	int byte, i = 0;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);
		for (i = 0; i < 10; i++)
		{
			if ((byte + i) >= size)
				printf("  ");
			else
				printf("%02x", *(b + i + byte));
			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}

		for (i = 0; i < 10; i++)
		{
			if ((byte + i) >= size)
				break;
			else if (*(b + i + byte) >= 31 && *(b + i + byte) <= 126)
				printf("%c", *(b + i + byte));
			else
			printf(".");
		}
		if (byte >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
