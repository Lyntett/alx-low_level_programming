#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 101-keygen.c
 *
 * Generates random password for the program 101-crackme
 *
 */
int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
