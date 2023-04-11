#include "main.h"

/**
  * free_grid - the function name
  * @grid: parameter of type int **.
  * @height: parameter of type int .
  * Return: void .
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
