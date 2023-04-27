#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_all - function that prints anything
 *@format: list of types of arguments passed to the funct
 *Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	char *s, *sp = "";
	va_list m;

	va_start(m, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(m, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(m, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(m, double));
					break;
				case 's':
					s =  va_arg(m, char *);
					if (!s)
					{
						s = "(nil)";
						printf("%s%s", sp, s);
					}
					printf("%s%s", sp, s);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(m);
}
