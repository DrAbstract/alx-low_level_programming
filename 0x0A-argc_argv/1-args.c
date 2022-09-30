#include <stdio.h>
/**
 * main - prints name of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */
int main(int argc, char *argv[])

{
(void)*argv;
printf("%d\n", argc - 1);
return (0);
}
