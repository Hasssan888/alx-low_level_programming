#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int l, i;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;

	i = l;
	while (i > 0)
	{
		_putchar(*s + 0);
		s--;
	}
	_putchar('\n');
}
