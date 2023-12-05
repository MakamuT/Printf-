#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: pointer
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int a = 0;
	va_list arg;

	va_start(arg, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(format[a]);
			a++;
		}
		else
		{
			switch (format[a])
			{
				case 'c':
					_putchar((char)va_arg(arg, int));
					break;
				case 's':
					{
						char *str = va_arg(arg, char *);

						while (*str != '\0')
						{
							_putchar(*str);
							str++;
						}
					} break;
				case  '%':
					_putchar('%');
					break;
				default:
					_putchar('%');
					break;
			}
		}
	}
	va_end(arg);
	return (a);
}
