#include "main.h"
/**
*swap_int - swap two integers
*@a: integer1
*@b: integer2
*Return: nothing
*/

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
