#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long int i, t1, t2, next;

	t1 = 1;
	t2 = 2;
	next = t1 + t2;

	printf("%li, %li, ", t1, t2);

	for (i = 3; i <= 98; ++i)
	{
		printf("%li, ", next);
		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}
	printf("%li", next);
	printf("\n");
	return (0);
}
