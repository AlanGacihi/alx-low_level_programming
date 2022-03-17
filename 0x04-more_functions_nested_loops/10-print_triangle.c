#include "main.h"

/**
* print_triangle - a function that prints a triangle
* @size: size of the triangle
* Return: triangle of '#'s
*/
void print_triangle(int size)
{
	int i, row, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row <= (size - 1); row++)
		{
			for (i = 0; i < (size - 1) - row; i++)
			{
				_putchar(' ');
			}
			for (j = 0; j <= row; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
