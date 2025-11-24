/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:20:25 by acombier          #+#    #+#             */
/*   Updated: 2025/11/24 16:33:41 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
