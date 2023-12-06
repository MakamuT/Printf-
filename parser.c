#include "main.h"
/**
 * parser - printf parse
 * @option: String to be printed
 * @f: a list of functions
 * @arg: arguments
 * Return: number of characters to be printed
 */
int parser(const char *option, print_f f[], va_list arg)
{
	char c = 'B';
	char *str = "This is my custom printf";
	int i, j, count, a = 0;

	_printf("Character: %c\nstring: %s\nDouble percent: %%\n:", c, str);

	for (i = 0; option[i] != '\0'; i++)
	{
		if (option[i] == '%')
		{
			for (j = 0; f[j].opt != NULL; j++)
			{
				if (option[i + 1] == f[j].opt[0])
				{
					count = f[j].op(arg);
					if (count == -1)
						return (-1);
					a += count;
					break; }
			}
			if (option[i] == '\0')
				break;
			if (f[j].opt == NULL && option[i + 1] != ' ')
			{
				if (option[i + 1] != '\0')
				{
					_putchar(option[i]);
					_putchar(option[i + 1]);
					a = a + 2;
				} else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(option[i]);
			a++;
		}
	} return (a);
}
