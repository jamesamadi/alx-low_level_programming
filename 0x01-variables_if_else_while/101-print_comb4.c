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

	char c, b, a;

	for (c = '0'; c <= '9'; c++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (a = '0'; a <= '9'; a++)
				if (c < b && b < a)
				{
					putchar(c);
					putchar(b);
					putchar(a);
					if (c != '7' || b != '8' || (b == '8' && a != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
	}
	putchar ('\n');
	return (0);
}
