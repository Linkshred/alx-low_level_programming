#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int num;
	char la;
	
	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (la = 'a'; la <= 'f'; la++)
		putcha(la);
	putchar('\n');
	return (0)
}
