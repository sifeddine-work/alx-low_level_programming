#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * myStartupFun - print before main functio
 *
 * Return: void
 */

void first(void)
{
	printf("You're beat! and yet
			, you must allow,\nI bore my house upon my back!\n");
}
