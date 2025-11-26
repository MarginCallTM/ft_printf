/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:34:40 by acombier          #+#    #+#             */
/*   Updated: 2025/11/26 14:36:55 by acombier         ###   ########.fr       */
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

int	ft_putnbr_unsigned(unsigned int n)
{
	char	digit;
	int		count;

	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n *= -1;
	}
	if (n > 9)
	{
		count += ft_putnbr_unsigned(n / 10);
	}
	digit = n % 10 + '0';
	write(1, &digit, 1);
	return (count + 1);
}

int	ft_putnbr_base(unsigned long n, char format)
{
	char	*base;
	int		count;

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
int	ft_print_pointer(va_list args)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	return (ft_put_address(ptr));
}

int	ft_print_pointer(va_list args)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	return (ft_put_address(ptr));
}
