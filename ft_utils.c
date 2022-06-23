/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:47:39 by intonoya          #+#    #+#             */
/*   Updated: 2022/06/23 20:46:30 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr_fd("(null)");
		return (6);
	}	
	while (str[i])
	{
		write (1, str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int i)
{
	int		l;
	char	*num;

	l = 0;
	num = ft_itoa(i);
	l = ft_putstr_fd(num);
	free (num);
	return (l);
}

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}	
