#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function with two arguments
 * @n: int data structure - first argument
 *
 * Description: returns the sum of all its parameters
 * Return: value of sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add = 0, number;
	va_list para;

	va_start(paras, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		number = va_arg(para, int);
		add = add + number;
	}

	va_end(para);
	return (add);
}
