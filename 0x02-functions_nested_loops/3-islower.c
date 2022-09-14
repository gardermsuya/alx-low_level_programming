#include "main.h"
#include <unistd.h>
/**
 *_isliwer -checks for a lowercase character
 *@c: letter being tested
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
