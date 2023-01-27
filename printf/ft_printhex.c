#include "ft_printf.h"

int ft_gethexlen(int nb)
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

void ft_puthex(int nb, char format)
{
    if (nb >= 16)
    {
        ft_puthex(nb / 16, format);
        ft_puthex(nb % 16, format);
    }
    else if (nb > 9)
    {
        if (format == 'x')
            ft_putchar_fd((nb - 10 + 'a'), 1);
        if (format == 'X')
            ft_putchar_fd((nb - 10 + 'A'), 1);
    }
    else
        ft_putchar_fd((nb + '0'), 1);
}


int ft_printhex(int nb, char format)
{
    if (nb == 0)
        return (write(1, "0", 1));
    else
        ft_puthex(nb, format);
    return (ft_gethexlen(nb));
}