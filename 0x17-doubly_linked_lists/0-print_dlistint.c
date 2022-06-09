#include "lists.h"
/**
* print_dlistint - prints all the elements of a dlistint_t list.
* @h: List to print.
* Return: Number of nodes of the list.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h->next)
	{
		printf("%d\n", h->n);
		counter++;
	}
	return (counter);
}
