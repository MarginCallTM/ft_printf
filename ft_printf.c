/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:18:04 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/19 11:43:19 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int i;
    i = 0;
    char c;
    char *str;
    int j;
    int n;
    unsigned int    u;
    
    int count; 
    count = 0;

    va_start(args, format);

    while(format[i])
    {
        if(format[i] == '%' && format[i + 1] == 'c')
        {
            c = va_arg(args, int);
            write(1, &c, 1);
            count++;
            i += 2;
        }
        else if(format[i] == '%' && format[i + 1] == 's')
        {
            str = va_arg(args, char *);
            if(!str)
                str = "(null)";
            ft_putstr_fd(str, 1);
            count += ft_strlen(str);
            i += 2;
        }
        else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
        {
            n = va_arg(args, int);
            count += ft_putnbr(n);
            i += 2;
        }
        else if (format[i] == '%' && format[i + 1] == 'u')
        {
            u = va_arg(args, unsigned int);
            count += ft_putnbr_unsigned(u);
            i += 2;
        }
        else
        {
            write(1,&format[i], 1);
            count++;
            i++;
        }

    }
    va_end(args);
    
    return (count);
}
