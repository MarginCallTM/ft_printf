/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:17:55 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/24 09:31:46 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
    unsigned int    n;

    n = 305441741;

    ft_printf("Lettre : %c\n", 'Z');
    ft_printf("Prenom : %s\n", "Adrien");

    ft_printf("Prenom : %s\nLettre : %c\n", "Adrien", 'Z');

    ft_printf("Test char : %c\n", 'A');
	ft_printf("Test string : %s\n", "Hello");
	ft_printf("Null string : %s\n", (char *)0);

    ft_printf("ticker: %s\nValue : %d\n", "BTC", 90000);
    ft_printf("ticker: %s\nValue : %i\n", "Neet", 10);

    ft_printf("Agent %u\n", 4294967295);

    ft_printf("Hexa base 16 value %x\n", 42);

    ft_printf("Hexa base 16 value %x\n", n);
    ft_printf("Hexa base 16 value %X\n", n);

    ft_printf("Hexa base 16 value %x\n", 0);
    ft_printf("Hexa base 16 value %X\n", 42);

    return (0);
}