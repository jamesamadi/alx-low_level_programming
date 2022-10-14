#include "main.h"
int check_for_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 for prime numbers otherwise 0
 **/

int is_prime_number(int n)
{
	return (check_for_prime(n, 2));
}

/**
 * check_for_prime - does individual number check for prime number
 * @i: a given divisor
 * @n: numbr to be checked
 * Return: 1 for prime numbers otherwise 0
 **/

int check_for_prime(int n, int i)
{
	if (n < 2)
		return (0);
	if (n % i == 0)
		return (0);
	if ((n / i) < i && (n % i) != 0)
		return (1);
	return (check_for_prime(n, i + 1));
}
