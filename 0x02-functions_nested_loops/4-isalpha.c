#include "main.h"
/**
 * _isalpha - entry point
 * @c: will be checked
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
