#include "main.h"

/**
 * main - Entry point
 * Description: prints _putchar using putchar prototype
 * Return: Always 0 (Success)
 */
int main(void)
{
	char message[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
		_putchar (message[a]);
	 _putchar ('\n');
	return (0);
}
