#include <stdio.h>
/**
 *main - Enty point
 *Description:'programm prints all possible different combinitions of 2 digits'
 *Return: 0 (SUCCESS)
 */
int main(void)
{
	char i;
	char j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
			if (i == '8' && j == '9')
			continue;
		}
		j++;
	}
	return (0);
}
