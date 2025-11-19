/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:39:06 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/19 11:41:06 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_unsigned(unsigned int n)
{
    char    digit;
    int count;

    count = 0;
    while(n > 9)
    {
        count += ft_putnbr_unsigned(n / 10);
    }
    digit = n % 10 + '0';
    write(1, &digit, 1);
    return (count + 1);
}