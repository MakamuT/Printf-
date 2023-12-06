#include "main.h"
/**
 * print_address - prints memory address in hexadecimal form
 * i.e. 'a' to 'f'
 * @arg: argument
 * Return: number of characters
 */
int print_address(unsigned long int arg)
{
	int i, rem, count = 0;
	char hex;
	unsigned long int temp = arg;

	while (temp != 0)
	{
		temp /= 16;
		count++;
	}
	if (arg == 0)
	{
		_putchar(48);
		count++;
	}
	_putchar(48);
	_putchar('x');

	for (i = 0; arg != 0; i++)
	{
		rem = arg % 16;
		hex = (rem < 10) ? (char)(rem + 48) : (char)(rem - 10 + 97);
		_putchar(hex);
		arg /= 16;
	}
	return (count + 2);
}

/**
 * print_pointer - prints String in hexadecimal format
 * @arg: argument
 * Return: number of characters
 */
int print_pointer(va_list arg)
{
	void *ptr;
	long int count;
	int i, byte;

	ptr = va_arg(arg, void*);
	while (ptr == NULL)
	{
		char *str = "(nil)";

		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		return (i);
	} else
	{
		byte = _printf("Address:[%p]", ptr);
	}
	count = (unsigned long int)ptr;
	byte = print_address(count);
	return (byte);
}
