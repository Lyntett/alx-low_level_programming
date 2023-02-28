
#include <stdio.h>

void _puts(char *str);
/**
 * main - prints a string
 *
 * Return: Always 0
 */
int main(void)
{
	char *str;

	str = "Holberton!";
	_puts(str);
	return (0);
}
