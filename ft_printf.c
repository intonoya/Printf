/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:54:33 by intonoya          #+#    #+#             */
/*   Updated: 2022/06/23 20:46:21 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_f(va_list ar, const char f)
{
	int	print_length;

	i = 0;
	if (f == 'c')
		print_length += ft_putchr_fd(va_arg(ar, int));
	else if (f == 's')
		print_length += ft_putstr_fd(va_arg(ar, char *)); 
	else if (f == 'p')
		print_length += ft_printptr(va_arg(ar, unsigned long long));
	else if (f == 'd' || f == 'i')
		print_length += ft_printnbr(va_arg(ar, int )); 
	else if (f == 'u')
		print_length += ft_printunsigned(va_arg(ar, unsigned int));
	else if (f == 'x' || f == 'X')
		print_length += ft_
	else if (f == '%')
		print_length += ft_printpercent();
	return (prl);	
}	

int	ft_printf(const char *format, ...)
{
	va_list	a;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(a, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			j += ft_f(a, format[i + 1]);
			i++;
		}
		else
			j += ft_printch(a[i]);
			i++;
	}
	va_end(a);
	return (j);
}
