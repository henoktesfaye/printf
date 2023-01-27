#include "main.h"

/**
 * prip - returns the character %
 * @args: vardic para
 * Return: number of character printed
 */
int prip(va_list args)
{
	(void)args;

	write(1, "%", 1);
	return (1);
}
