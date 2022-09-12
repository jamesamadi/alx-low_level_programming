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

	char ch;
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
