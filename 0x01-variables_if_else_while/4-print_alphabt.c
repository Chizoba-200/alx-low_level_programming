#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 95; i < 120; i++)
	{
		if (i != 100 && i != 112)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}


