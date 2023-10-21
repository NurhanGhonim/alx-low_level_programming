#include <stdio.h>

/**
 * main - entry poiny
 *
 * Description: print alphapet in lowercase then in uppercase
 *
 * Return: Always 0 (success)
*i/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
