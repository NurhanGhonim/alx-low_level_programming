#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Write a program that prints all single digits from 0 to 9
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
