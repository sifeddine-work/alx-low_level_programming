#include "main.h"
/**
 * _pow_recursion - function that returns the value of x power y
 * @x: integer
 * @y: integer
 * Return: integer(x power y )
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
