/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 06:42:53 by saboulal          #+#    #+#             */
/*   Updated: 2022/11/13 06:43:36 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putnbr_base(unsigned int nb, int *r, char *base)
{
	if (nb > 15)
	{
		ft_putnbr_base(nb / 16, r, base);
		ft_putnbr_base(nb % 16, r, base);
	}
	else
	{
		*r += ft_putchar(base[nb]);
	}
}
