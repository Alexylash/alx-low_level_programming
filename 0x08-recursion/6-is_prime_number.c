#include "main.h"

/**
 * check - for prime numbers
 * @i: int
 * @a: int
 * Return: int
 */

int check(int i, int a)
{
	if (a < 2 || a % i == 0)
		return (0);
	else if (i > a / 2)
		return (1);
	else
		return (check(i + 1, a));
}

/**
 * is_prime_number - returns 1 if prime num, otherwise return 0
 * @n: num
 * Return: 1 if prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
