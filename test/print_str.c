#include"main.h"
#include <stdarg.h>
/**
 * print_str - Prints a character
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
    char *str = va_arg(args, char *);

    if (str == NULL)
    {
        _puts("(null)");
        return 6;
    }

    _puts(str);
    return (_strlen(str));
}
