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
		if (*format == '%')
		{
			switch (format[a])
			{
				case 'c':
					{
						char c = (char) va_arg(arg, int);

						_putchar(c);
					} break;
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
					a++;
			}
		}
		else
		{
			_putchar(*format);
			a++;
		}
	}
	va_end(arg);
	return (a);
}
