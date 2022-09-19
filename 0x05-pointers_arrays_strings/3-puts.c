#include "main.h"

/**
 * _puts - prints a string
 * @strL char
 * Return: string
 */
void _pust(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
