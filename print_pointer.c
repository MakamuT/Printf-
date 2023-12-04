#include "main.h"
/**
 * print_address - prints memory address in hexadecimal form
 * i.e. 'a' to 'f'
 * @arg: argument
 * Return: number of characters
 */
int print_address(unsigned long int arg)
{
	long int i, *arr, count = 0;
	unsigned long int temp = arg;

	while (arg / 16 != 0)
	{
		arg /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] += 39;
	}
	free(arr);
	return (count);
}

/**
 * print_pointer - prints String in hexadecimal format
 * @arg: argument
 * Return: number of characters
 */
int print_pointer(va_list arg)
{
	void *ptr;
	char *str = "(nil)";
	long int count;
	int i, byte;

	ptr = va_arg(arg, void*);
	while (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		return (i);
	}
	count = (unsigned long int)ptr;
	_putchar(48);
	_putchar('x');
	byte = print_address(count);
	return (byte + 2);
}
