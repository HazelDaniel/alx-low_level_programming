#include "main.h"

/**
  * alloc_grid - the function name
  * @width: parameter of type int .
  * @height: parameter of type int .
  * Return: int **.
 */
int **alloc_grid(int width, int height)
{
	int **temp = NULL, count = 0;

	if (width > 0 && height > 0)
	{
		temp = (int **)calloc(height, sizeof(int *));
		if (temp != NULL)
		{
			for (; count < height; count++)
			{
				*(temp + count) = (int *)calloc(width, sizeof(int));
			}
		}
	}
	return (temp);
}
