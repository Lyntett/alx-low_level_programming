#include "main.h"

/**
 * _isalpha - checkers if a character is part of the English alphabet
 * @c: character to be checked
 *
 * Return: 1 if the character is an English alphabet,
 *         0 if the character is not an English alphabet.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
