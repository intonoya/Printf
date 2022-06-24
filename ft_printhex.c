/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:36:31 by intonoya          #+#    #+#             */
/*   Updated: 2022/06/24 17:54:10 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned int num)
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

void	ft_puthex(unsigned int num, const char form)
{
	if (num >= 16)
	{
		ft_puthex((num / 16), form);
		ft_puthex((num % 16), form);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (form == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			else if (form == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}	
}

int	ft_printhex(unsigned int num, const char form)
{
	if (num == 0)
		return (write (1, "0", 1));
	else
		ft_puthex(num, form);
	return (ft_hexlen(num));
}	
