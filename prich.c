#include "main.h"

/**
 * prich - prints character
 * @args: varidc
 * Return: number of chac
 */
int prich(va_list args)
{
	char c = (char)va_arg(args, int);
	int count = 0;

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	return (0);
}
