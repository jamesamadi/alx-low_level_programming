#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - to point a pointer to 98
 * Description: interger value
 * Return: void
 */

int main(void)
{
	int a = 0;
	int b = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (b < 2772)
	{
		a = rand() % 128;
		if ((b + a) > 2772)
			break;
		b = b + a;
		printf("%c", a);
	}
	printf("%c\n", (2772 - b));
	return (0);
}
