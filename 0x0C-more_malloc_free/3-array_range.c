#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Main entry
 *@min: pointer
 *@max: pointer
 *Description:create an array of integers.
 * Return:interger
 */
int *array_range(int min, int max)
{
	int *array;
	int c;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (c = 0; min <= max; c++, min++)
		array[c] = min;

	return (array);
}
