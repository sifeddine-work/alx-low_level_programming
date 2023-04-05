#include "main.h"
/**
 * prime - calculates if a number is prime
 * @n:integer
 * @i:index
 * Return: 1 or 0
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
/**
 * is_prime_number - function prime number
 * @n: integer
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
