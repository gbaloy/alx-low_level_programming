#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: void
 */

int print_alphabet_x10(void)
{
	int count = 0;
	char letter = 'a';

	while (count < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		count++;
	}
}
