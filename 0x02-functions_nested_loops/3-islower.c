#include "main.h"
/**
 * _isliwer -checks for a lowercase character
 * @c: letter being tested
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
