#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 90; i++)
	{
		for (j = 1)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
		if (i != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
