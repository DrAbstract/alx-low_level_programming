#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print the lowercase alphabet in reverse.
 *
 * Remain: Always 0 (Success)
 */

int main(void)
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
