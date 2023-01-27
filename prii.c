#include "main.h"

/**
 * prii - prints integer
 * @args: variadic para
 * Return: prints integers
 */
int prii(va_list args)
{
	int i = 0;
	int count = 0;
	int numb;
	int my_arr[10];
	char x[1];

	numb = va_arg(args, int);
	while (numb != 0)
	{
		my_arr[i] = (numb % 10);
		numb = numb / 10;
		if (numb == 0)
			break;
		else
			i++;
	}
	for (i; i >= 0; i--)
	{
		x[0] = ('0' + my_arr[i]);
		count += write(1, x, 1);
	}
	return (count);
}
