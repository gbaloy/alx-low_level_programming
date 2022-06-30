#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - malloc memory allocation
 *
 *@b:interger
 *Return:pointer to allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
