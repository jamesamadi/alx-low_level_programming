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
	int d, a = 0;
	int b = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (b < 1000)
	{
		a = rand() % 28;
		if ((b + a) > 1000)
			break;
		b = b + a;
		printf("%c", a);
	}

	d = 2772 - b;

	printf("%c\n", d);
	return (0);
}
