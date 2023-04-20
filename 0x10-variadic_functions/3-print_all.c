#include "variadic_functions.h"

/**
 * print_all - Prints a variable number of arguments of different types.
 * @format: A string specifying the types of the arguments.
 *
 * Description: This function prints a variable number of arguments of different
 * types, according to a format string that specifies the types of the arguments.
 * The supported types are 'c' for char, 'i' for int, 'f' for float, and 's' for
 * string. The arguments are passed to the function using the C va_list mechanism.
 * If a string in the argument list is NULL, the string "(nil)" is printed instead.
 * If the format string is NULL, nothing is printed. The function prints a newline
 * character at the end of the list.
 */
void print_all(const char * const format, ...)
{
    int i;
    int flag;
    char *str;
    va_list a_list;

    va_start(a_list, format);

    i = 0;
    while (format != NULL && format[i] != '\0')
    {
        switch (format[i])
        {
            case 'c':
                printf("%c", va_arg(a_list, int));
                flag = 0;
                break;
            case 'i':
                printf("%i", va_arg(a_list, int));
                flag = 0;
                break;
            case 'f':
                printf("%f", va_arg(a_list, double));
                flag = 0;
                break;
            case 's':
                str = va_arg(a_list, char*);
                if (str == NULL)
                    str = "(nil)";
                printf("%s", str);
                flag = 0;
                break;
            default:
                flag = 1;
                break;
        }
        if (format[i + 1] != '\0' && flag == 0)
            printf(", ");
        i++;
    }

    printf("\n");
    va_end(a_list);
}
