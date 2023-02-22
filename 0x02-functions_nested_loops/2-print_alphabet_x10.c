#include "main.h"

/**
 * print_alphabets_x10 - repeats the prints_alphabets 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
