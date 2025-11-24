/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:18:04 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/24 11:20:01 by acombier         ###   ########.fr       */
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
    int di;
    unsigned int x;
    unsigned int    u;
    void    *ptr;
    
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
            ft_putstr(str);
            count += ft_strlen(str);
            i += 2;
        }
        else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
        {
            di = va_arg(args, int);
            count += ft_putnbr(di);
            i += 2;
        }
        else if (format[i] == '%' && format[i + 1] == 'u')
        {
            u = va_arg(args, unsigned int);
            count += ft_putnbr_unsigned(u);
            i += 2;
        }
        else if( (format[i] == '%' && format[i + 1] == 'x') || format[i + 1] == 'X')
        {
            x = va_arg(args, unsigned int);
            count += ft_putnbr_base(x, format[i + 1]);
            i += 2;
        }
        else if (format[i] == '%' && format[i + 1] == 'p')
        {
            ptr = va_arg(args, void *);
            count += ft_putAddress(ptr);
            i += 2;
        }
        else if (format[i] == '%' && format[i + 1] == '%')
        {
            write(1, "%%", 1);
            count ++;
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
