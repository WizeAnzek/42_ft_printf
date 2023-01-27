#include "ft_printf.h"

int ft_getptrlen(unsigned long long nb)
{
    int count;

    count = 0;
    while (nb != 0)
    {
        count++;
        nb = nb / 16;
    }
    return (count);
}

void    ft_putptr(unsigned long long nb)
{
    if (nb >= 16)
    {
        ft_putptr(nb / 16);
        ft_putptr(nb % 16);
    }
    else if (nb > 9)
        ft_putchar_fd((nb - 10 + 'a'), 1);
    else
        ft_putchar_fd((nb + '0'), 1);
}

int ft_printptr(void *ptr)
{
    int len;
    unsigned long long nb;

    len = 0;
    nb = (unsigned long long) ptr;
    len += write(1, "0x", 2);
    if (ptr == 0)
        len += write(1, "0", 1);
    else
    {
        ft_putptr(nb);
        len += ft_getptrlen(nb);
    }
    return (len);
}