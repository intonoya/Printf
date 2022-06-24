/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:31:46 by intonoya          #+#    #+#             */
/*   Updated: 2022/06/24 18:02:42 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_hexlen(unsigned int num);
void	ft_puthex(unsigned int num, const char form);
int		ft_printhex(unsigned int num, const char form);
int		ft_numlen(int num);
char	*ft_uitoa(unsigned int n);
int		ft_printunsigned(unsigned int n);
int		ft_ptrlen(void *num);
void	ft_putptr(void *num);
int		ft_printptr(unsigned long long ptr);
int		ft_printstr(char *str);
int		ft_printnbr(int i);
int		ft_printpercent(void);

#endif
