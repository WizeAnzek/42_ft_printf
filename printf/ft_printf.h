#ifndef FTPRINTF_H
# define FTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

int ft_printf(const char *format, ...);
int    ft_typedetector(va_list ap, const char c);
int ft_printpercent();
int ft_printchar(int c);
int	ft_printnbr(int n);
int ft_printstr(char *s);
int ft_gethexlen(int nb);
void ft_puthex(int nb, char format);
int ft_printhex(int nb, char format);
int ft_getptrlen(unsigned long long nb);
void    ft_putptr(unsigned long long nb);
int ft_printptr(void *ptr);
int ft_getlen_unsigned(unsigned int n);
char    *ft_itoa_uns(unsigned int nb);
int	ft_printunsigned(unsigned int n);



#endif
