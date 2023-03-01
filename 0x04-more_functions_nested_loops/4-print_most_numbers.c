#include "main.h"
/**
 * print_most_numbers - print the numbers interleaved
 *
 * Return: numbers
 */
void prints_most_numbers(void)
{
	int numb;

	for (numb = 48 ; numb <= 57 ; numb++)
	{
		if (numb != 50 && numb != 52)
		{
			_putchar(numb);
		}
	}
	_putchar('\n');
}
