#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 * Return :always 0 (success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar("%c", alpha);
	}
	_putchar("\n");
}
