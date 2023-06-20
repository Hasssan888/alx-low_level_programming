#include"main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int times, b;

	for (times = 0; times <= 9; times++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
