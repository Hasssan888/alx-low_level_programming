#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int l, i;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;

	i = l;
	while (i > 0)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
