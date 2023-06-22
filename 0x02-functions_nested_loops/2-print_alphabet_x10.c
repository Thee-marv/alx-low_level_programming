#include "main.h"
/**
 * print_alphabet_x10 - prints lower case letters 10X
 * Using thre ASCII table
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 1; i <= 10; i++)
	{
		for ( a= 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
