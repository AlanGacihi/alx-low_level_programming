#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int t1, t2, next;

	next = 3;

	printf("%d, %d, ", 1, 2);

	for (i = 3; i <= 50; ++i)
	{
		printf("%d, ", next);
		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}
	return (0);
}
