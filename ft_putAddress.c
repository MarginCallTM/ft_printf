/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putAddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:47:51 by acombier          #+#    #+#             */
/*   Updated: 2025/11/24 11:50:29 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putAddress(void *ptr)
{
	unsigned long address;
	int count;

	count = 0;
	address = (unsigned long)ptr;

	if (!ptr)
		return (write(1, "(nil)", 5));

	write(1, "0x", 2);
	count += 2;
	count += ft_putnbr_base(address, 'x');

	return (count);
}