#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills the memory with a constant byte
 * @s: the memory area to be filled
 * @b: character to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		s[y] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates the memory for an array
 * @nmemb: the number of elements in the array
 * @size: the size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}








