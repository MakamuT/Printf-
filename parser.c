#include "main.h"
/**
 * parser - printf parse
 *
 * Return: 0
 */

int parser()
{
	char c = 'B';
	char *str = "This is my custom printf";

	_printf("Character: %c\nstring: %s\nDouble percent: %%\n:", c, str);
	return (0);
}
