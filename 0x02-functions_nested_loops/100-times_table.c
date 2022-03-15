#include "main.h"
/**
* print_times_table - a function that prints the n times table starting from 0
*
* @n: number input Ranges from 0-15 (inclusive)
* Return: Always 0 (Success)
*/
void print_times_table(int n)
{
	int row, col, step;

	step = 0;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col += step)
		{
			_putchar((col + '0'));
		}
		step++;
		_putchar('\n');
	}

	return (0);
}
