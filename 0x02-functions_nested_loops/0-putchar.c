#include "holberton.h"
/**
 *   main - Print "_putchar" followed by a new line.
 *   Description: You are not allowed to include standard libraries.
 *   Return: 0
 */
int main(void)
{
	char c[10] = "_putchar";
	int i = 0;
	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
