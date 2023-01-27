#include "ft_printf.h"

int    ft_typedetector(va_list ap, const char c)
{
    if (c == 'c')
        return (ft_printchar(va_arg(ap, int)));
    else if (c == 's')
        return (ft_printstr(va_arg(ap, char *)));
    else if (c == 'p')
        return (ft_printptr(va_arg(ap, void *)));
    else if (c == 'd' || c == 'i')
        return (ft_printnbr(va_arg(ap, int)));
    else if (c == 'u')
        return (ft_printunsigned(va_arg(ap, unsigned int)));
    else if (c == 'x' || c == 'X')
        return (ft_printhex(va_arg(ap, int), c));
    else if (c == '%')
        return (ft_printpercent());
    else
        return (-1);
}

int ft_printf(const char *format, ...)
{
    va_list ap;
    int     i;
    int     res;

    va_start (ap, format);
    i = 0;
    res = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            res += ft_typedetector(ap, format[i]);
        }
        else 
            res += write(1, &format[i], 1);
        i++;
    }
    va_end(ap);
    return (res);
}