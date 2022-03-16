#include "main.h"
/**
* print_times_table - a function that prints the n times table starting from 0
*
* @n: number input Ranges from 0-15 (inclusive)
*
*/
void print_number(int n);
void print_times_table(int n)
{
	int a, i, row, col, count;

	count = 0;

	if (!(n > 15 || n < 0))
	{
		for (row = 0; row < n; row++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('0');
		_putchar('\n');
		for (row = 1; row <= n; row++)
		{
			_putchar('0');
			_putchar(',');
			for (col = row; col <= n * row; col += row)
			{
				a = col;
				count = 0;
				do {
					a /= 10;
					++count;
				} while (a != 0);
				for (i = 0; i < 4 - count; i++)
				{
					_putchar(' ');
				}

				print_number(col);
				if (col != n * row)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}

/**
* print_times_table - a function that prints the input number digit by digit
*
* @n: number input
*
*/
void print_number(int n)
{
	if (n / 10)
	print_number(n / 10);

	_putchar(n % 10 + '0');
}

