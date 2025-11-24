/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 08:47:28 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/24 11:45:26 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, char format)
{
	char *base;
	int count;

	count = 0;

	if (!format)
		return (0);
	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	else
		return (0);

	if (n >= 16)
		count += ft_putnbr_base(n / 16, format);
	write(1, &base[n % 16], 1);
	count++;
	return (count);
}