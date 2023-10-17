#include "main.h"
#include <stdarg.h> /* Include the necessary header file */

/**
 * _printf - function that produces output according to a format
 * 
 * @format : the format string
 *
 * Return: number of characters printed 
 */
int _printf(const char *format, ...)
{
    int sum = 0;
    va_list ap;
    char *p;
    va_start(ap, format);

    for (p = (char *)format; *p; p++)
    {
        if (*p != '%')
        {
            sum += putchar(*p);
            continue;
        }

        p++; /* Move past '%'*/
        if (*p == '\0') /*If '%' is the last character, it's an error */
            return (-1);

        if (*p == 'c')
        {
            char c = va_arg(ap, int); /* Get the character from va_args */
            sum += _putchar(c);
        }
        else if (*p == 's')
        {
            char *str = va_arg(ap, char *); /* Get the string from va_args */
            if (str == NULL)
                return (-1); /* Handle NULL string */
            while (*str)
            {
                sum += _putchar(*str);
                str++;
            }
        }
        else if (*p == '%')
        {
            sum += _putchar('%');
        }
        else
        {
            return (-1); /* Invalid format specifier */
        }
    }

    va_end(ap);
    return sum;
}

