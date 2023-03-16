#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 */

int main(void)
{
	puts("Size of a char: %i byte(s)", sizeof(char));

	puts("Size of an int: %i byte(s)", sizeof(int));

	puts("Size of a long int: %i byte(s)", sizeof(long int));
	
	puts("Size of a long long int: %i byte(s)", sizeof(long long int));

	puts("Size of a float: %i byte(s)", sizeof(float));
	return (0);
}
