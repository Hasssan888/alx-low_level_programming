#include"main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                  the alphabet a - z
 */

void print_alphabet(void)
{
int c;

for (c = 97; c <= 122; c++)
	_putchar (c);
_putchar ('\n');
}
