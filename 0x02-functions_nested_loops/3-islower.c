#include "main.h"
/**
 * _isliwer -checks for a lowercase character
 * @c: letter being tested
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
