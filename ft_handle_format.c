/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:07:52 by acombier          #+#    #+#             */
/*   Updated: 2025/11/24 16:19:57 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_format(char type, va_list args)
{
	if (type == 'c')
		return (ft_print_char(args));
	if (type == 's')
		return (ft_print_string(args, type));
	if (type == 'd' || type == 'i' || type == 'u' || type == 'x' || type == 'X')
		return (ft_print_number(args, type));
	if (type == 'p')
		return (ft_print_pointer(args));
	if (type == '%')
	{
		write(1, "%%", 1);
		return (1);
	}
	write(1, &type, 1);
	return (1);
}
