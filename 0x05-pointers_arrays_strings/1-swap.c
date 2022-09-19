#include "main.h"

/**
 * swap_int - swap the two int
 * @*a: hold value b
 * @*b: hold value a
 * Return: int
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
