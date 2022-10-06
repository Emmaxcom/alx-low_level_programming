#include "main.h"

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr;
int i = 0;

if (nmemb == 0 || size == 0)
	return (NULL);

else
	{
	ptr = malloc(size * nmemb);
	return (ptr);
	}
}
