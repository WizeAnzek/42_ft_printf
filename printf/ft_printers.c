#include "ft_printf.h"

int ft_printchar(int c)
{
    return (write(1, &c, 1));
}

int ft_printstr(char *s)
{
    int i;

    i = 0;
    if (!s)
        return (write(1, "(null)", 6));
    while (s[i])
        i += write(1, &s[i], 1);
    return (i);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}

int ft_printpercent()
{
    return (write(1, "%", 1));
}