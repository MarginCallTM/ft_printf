/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:44:03 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/24 11:45:47 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int i = 0;
	if (!str)
		return (ft_print_str("(null)"));

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}