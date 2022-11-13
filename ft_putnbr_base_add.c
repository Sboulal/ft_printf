/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_add.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 06:40:34 by saboulal          #+#    #+#             */
/*   Updated: 2022/11/13 06:41:27 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putnbr_base_add(unsigned long long nb, int *r, char *base)
{
	if (nb > 15)
	{
		ft_putnbr_base_add(nb / 16, r, base);
		ft_putnbr_base_add(nb % 16, r, base);
	}
	else
	{
		*r += ft_putchar(base[nb]);
	}
}
