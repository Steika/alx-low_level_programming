#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The starting of the program
 * Return: always true (0)
 *
 **/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
			letter++;
			continue;
		}
	}

	putchar('\n');

	return (0);
}