#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int s, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (s = 0; s < height; s++)
	{
		mee[s] = malloc(sizeof(int) * width);

		if (mee[s] == NULL)
		{
			for (; s >= 0; s--)
				free(mee[s]);

			free(mee);
			return (NULL);
		}
	}

	for (s = 0; s < height; s++)
	{
		for (y = 0; y < width; y++)
			mee[s][y] = 0;
	}

	return (mee);
}








