#include "main.h"

/**
  * alloc_grid - the function name
  * @width: parameter of type int .
  * @height: parameter of type int .
  * Return: int **.
 */
int **alloc_grid(int width, int height)
{
	int **temp = NULL, count = 0, alloc_fail = 0;

	if (width > 0 && height > 0)
	{
		temp = (int **)calloc(height, sizeof(int *));
		if (temp != NULL)
		{
			for (; count < height; count++)
			{
				*(temp + count) = (int *)calloc(width, sizeof(int));
				if (*(temp + count) == NULL)
					alloc_fail++;
			}
		}
		else
		{
			alloc_fail++;
		}
		if (alloc_fail)
		{
			for (; count < height; count++)
			{
				free(*(temp + count));
			}
			free(temp);
			return (NULL);
		}
	}
	return (temp);
}
