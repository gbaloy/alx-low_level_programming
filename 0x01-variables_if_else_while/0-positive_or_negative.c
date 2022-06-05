#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n < 0)
		printf( n, "is negative %d\n");
	else if (n == 0)
		printf( n, "is zero %d\n");
	else 
		printf( n, "is positive %d\n");

	return (0);
}
