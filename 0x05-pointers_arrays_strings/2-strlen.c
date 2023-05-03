#include "main.h"
/**
 * _strlen - finds the length of a string
 * @s: String pointer to the string whose length is to be found
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}


