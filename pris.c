#include "main.h"

/**
 * pris - prints string
 * @args: varic parameter
 * Return: no of characters
 */
int pris(va_list args)
{
	int i;
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);
	while (str[i])
	{
		count = write(1, &str[i], 1);
		i = i + 1;
	}
	return (count);
}
