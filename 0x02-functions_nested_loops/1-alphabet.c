#include "main.h"
/**print_alphabet prints alphabets in lower case
 * Using ASCII Table
 * Return: always 0
 */
void print_alphabet(void)
{
	int i;

	for (i=97; i<=122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
