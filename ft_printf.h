/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:18:01 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/24 09:14:02 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *format, ...);
void    ft_putstr(char *str);
int ft_print_str(char *str);
int ft_putnbr(int n);
size_t  ft_strlen(char *str);
int ft_putnbr_unsigned(unsigned int n);
int ft_putnbr_base(unsigned int n, char format);

#endif