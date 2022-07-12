#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int i, y;
	for (i = 0; i < 10; i++)
	{
		putchar (i + '0');
	}

	for (y = 'a'; y <= 'f'; y++)
	{
		putchar (y);
	}

	putchar('\n');
	return (0);
}
