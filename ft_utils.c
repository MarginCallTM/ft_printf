/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:29:53 by acombier          #+#    #+#             */
/*   Updated: 2025/11/26 14:35:00 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	ft_putchar(c);
	return (1);
}

int	ft_print_string(va_list args, char type)
{
	char	c;
	char	*str;

	if (type == 'c')
	{
		c = va_arg(args, int);
		ft_putchar(c);
		return (1);
	}
	if (type == 's')
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(null)";
		ft_putstr(str);
		return (ft_strlen(str));
	}
	return (0);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
