#include "main.h"
/**
 * fdec_plus - handles + flag for decimals
 * @arg: argument
 * Return: number of characters printed
 */
int fdec_plus(va_list arg)
{
	int count = 0;
	int num = va_arg(arg, int);

	if (num >= 0)
	{
		_putchar('+');
		count++;
	}
	count += print_decimal(arg, NULL);
	return (count);
}
