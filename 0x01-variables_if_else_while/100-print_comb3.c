#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Code prints things
 *
 *Return: 0 after completing loop
 */
int main(void)
{

	int c, b;

	for (c = '0'; c <= '9'; c++)
	{
		for (b = '0'; b <= '9'; b++)
			if (c < b)
			{
				putchar(c);
				putchar(b);
				if (c != '8' || (c == '8' && b != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar ('\n');
	return (0);
}
