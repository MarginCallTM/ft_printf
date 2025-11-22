/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:17:55 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/22 16:58:40 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
    /*ft_putchar_fd('g', 1);
    ft_putstr_fd("\nHello world.\n", 1);

    ft_print_str("Miami looks good\n");
    ft_print_char('m');*/

    ft_printf("Lettre : %c\n", 'Z');
    ft_printf("Prenom : %s\n", "Adrien");

    ft_printf("Prenom : %s\nLettre : %c\n", "Adrien", 'Z');

    ft_printf("Test char : %c\n", 'A');
	ft_printf("Test string : %s\n", "Hello");
	ft_printf("Null string : %s\n", (char *)0);

    ft_printf("ticker: %s\nValue : %d\n", "BTC", 90000);
    ft_printf("ticker: %s\nValue : %i\n", "Neet", 10);

    ft_printf("Agent %u\n", 445641);

    return (0);
}