#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 * Return :always 0 (success)
 */
void print_alphabet(void)
{
	char alpha;

	for (char = 'a'; char >= 'z'; char++)
	{
		_putchar("%c", char);
	}
	_putchar("\n");
}
