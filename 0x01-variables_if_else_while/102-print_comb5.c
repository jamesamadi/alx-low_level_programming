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

	char c, b, a, d;

	for (c = 48; c <= 57; c++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (a = 48; a <= 57; a++)
			{
				for (d = 48; d <= 57; d++)
				{
				if (((a + d) > (c + b) && a >= c) || c < a)
				{
					putchar(c);
					putchar(b);
					putchar(' ');
					putchar(a);
					putchar(d);
					if (c + b + c + d == 227 && c == 57)
					{
					break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
