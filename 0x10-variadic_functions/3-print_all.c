#include "variadic_functions.h"
/**
 * print_all - Printsnumerst followed by a nrew line
 * @format: datatype of the data passed
 */
void print_all(const char * const format, ...)
{
	va_list prn;
	char *separator = ", ";
	unsigned int counter = 0;
	char *m;

	va_start(prn, format);
		while (format && *(format + counter) != '\0')
		{
			switch (*(format + counter))
			{
				case 's':
					m = va_arg(prn, char *);
					if (m)
						printf("%s", m);
					if (!m)
						printf("(nil)");
					break;
				case 'i':
					printf("%d", va_arg(prn, int));
					break;
				case 'f':
					printf("%f", va_arg(prn, double));
					break;
				case 'c':
					printf("%c", va_arg(prn, int));
					break;
				default:
					counter++;
					continue;
			}
			if (*(format + counter + 1) != 0)
				printf("%s", separator);
			counter++;
		}
	printf("\n");
	va_end(prn);
}
