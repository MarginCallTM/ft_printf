/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:18:01 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/18 18:51:55 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *format, ...);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *str, int fd);
int ft_print_str(char *str);
int ft_print_char(char c);

#endif