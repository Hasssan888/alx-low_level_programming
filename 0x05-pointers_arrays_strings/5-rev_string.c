#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int l, i;
	char tmp;

	i = 0;
	while (s[i] != 0)
		i++;

	l = 0;
	while (l < i / 2)
	{
		tmp = s[l];
		s[l] = s[i - 1 - l];
		s[i - 1 - l] = tmp;
		l++;
	}
}
