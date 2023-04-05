#include "main.h"
/**
 * function_sqrt - recurses to find the natural square root of a number
 * @n: number integer
 * @i: integer(index)
 * Return: integer(result of squar)
 */
int function_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (function_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square  of a number
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (function_sqrt(n, 0));
}
