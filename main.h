#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/*********** UTILITIES **************/
int _putchar(char c);
int _printf(const char *format, ...);

/* Functions to print characters and Strings */
int print_rev(va_list arg);

/* Functions to print decimal numbers */
int print_unsigned(va_list arg);

/* Function to print octal numbers */
int print_oct(va_list arg);

/* Functions to print hexadecimal numbers*/
int print_hex(va_list arg);
int print_HEX(va_list arg);

/* Functions to print memory addresses */
int print_address(unsigned long int arg);
int print_pointer(va_list arg);

#endif
