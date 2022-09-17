#include <stdio.h>
#include <stdlib.h>

/**
 * main - return a valur for upper case
 * Description: defines c as some integer
 * Return: returns 1 for success
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{

		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (n == 100)
		{
			printf("FizzBuzz")
		}
		else
			printf("%d ", n);
		n++;
	}
	printf("\n");
	return (0);
}
