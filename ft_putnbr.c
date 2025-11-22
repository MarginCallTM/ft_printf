/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 09:50:06 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/22 17:05:42 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
    char digit;
    int count;

    count = 0;
    if(n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return (11);
    }
    if(n < 0)
    {
        write(1, "-", 1);
        count++;
        n *= -1;
    }
    if(n > 9)
    {
      count += ft_putnbr(n / 10);
    }
    digit = n % 10 + '0';
    write(1, &digit, 1);
    return (count + 1);
}
