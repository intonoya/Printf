/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:03:55 by intonoya          #+#    #+#             */
/*   Updated: 2022/06/24 17:31:04 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrlen(void *num)
{
	int	len;

	len = 0;
	while (num != 0)
	{	
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_putptr(void *num)
{	
	if (num >= 16)
	{
		ft_putptr(num / 16);
		ft_putptr(num % 16);
	}
	else
	{	
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_printptr(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	print_length += write (1, "0x", 2);
	if (ptr == 0)
		print_length += write (1, "0", 1);
	else
	{
		ft_putptr(ptr);
		print_length += ft_ptrlen(ptr);
	}
	return (print_length);
}
