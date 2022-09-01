#include "main.h"
#include "stdlib.h"

/**
  * alloc_grid - creates a matrix
  *
  * @width: number of columns
  * @height: number of rows
  * Return: address of the location containing matrix
  */

int **alloc_grid(int width, int height)
{
	int **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = calloc(width * height, sizeof(int));
	if (!matrix)
		return (NULL);
	return (matrix);
}

