/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:37:04 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/18 18:39:56 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putstr_fd(char *str, int fd)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(fd, &str[i], 1);
        i++;
    }

}