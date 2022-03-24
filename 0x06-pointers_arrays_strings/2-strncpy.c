#include "main.h"
/**
* _strncpy - Entry point
* @dest: copy to
* @src: copy from
* @n: input no of char
* Return: Always 0 (Success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
