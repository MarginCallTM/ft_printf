/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:44:03 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/18 18:54:01 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_str(char *str)
{
    int i = 0;
    if(!str)
        return (ft_print_str("(null)"));
    
    while(str[i])
    {
        ft_putchar_fd(str[i], 1);
        i++;
    }
    return (i);
}