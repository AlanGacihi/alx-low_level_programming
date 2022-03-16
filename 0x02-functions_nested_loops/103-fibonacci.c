#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long int sum, t1, t2, next;

	t1 = 1;
	t2 = 2;
	next = t1 + t2;
	sum = 2;

	for (;;)
	{
		if (next > 4000000)
		{
			break;
		}

		if (next % 2 == 0)
		{
			sum += next;
		}

		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}
	printf("%li\n", sum);
	return (0);
}
