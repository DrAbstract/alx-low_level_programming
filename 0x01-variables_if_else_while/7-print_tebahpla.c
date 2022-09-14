#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print the lowercase alphabet in reverse.
 *
 * Remain: Always 0 (Success)
 */

int void main(...)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
