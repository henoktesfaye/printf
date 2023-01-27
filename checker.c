#include "main.h"

/**
 * checker - checks the character
 * @format: the specifirer
 * Return: pointer to function
 */
int (*checker(const char *format))(va_list)
{
	int i;

	func_t my_array[6] = {
		{"c", prich},
		{"s", pris},
		{"%", prip},
		{"i", prii},
		{"d", prid},
		{NULL, NULL}};
	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}
	}
	return (NULL);
}
