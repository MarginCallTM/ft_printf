/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:17:55 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/18 19:46:19 by adriencombi      ###   ########.fr       */
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

    ft_printf("Prenom : %s\nLettre : %c", "Adrien", 'Z');

    return (0);
}