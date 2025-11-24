/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:58:01 by acombier          #+#    #+#             */
/*   Updated: 2025/11/24 16:33:03 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(va_list args, char type)
{
	if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (type == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	if (type == 'x' || type == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), type));
	return (0);
}
