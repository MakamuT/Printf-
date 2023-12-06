#include "main.h"
/**
 * fdec_plus - handles + flag for decimals
 * @arg: argument
 * Return: number of characters printed
 */
int fdec_plus(va_list arg)
{
	int i, div = 1, len = 0;
	unsigned int num;

	i = va_arg(arg, int);
	if (i < 0)
	{
		len += _putchar(45);
		num = i * -1;
	}
	if (i == 0)
	{
		len += _putchar(48);
		return (1);
	}
	if (i > 0)
	{
		len += _putchar('+');
		num = i;
	}
	for (; num / div > 9;)
		div *= 10;
	for (; div != 0;)
	{
		len += _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}
	return (len);
}
