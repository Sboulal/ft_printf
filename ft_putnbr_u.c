/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 06:44:00 by saboulal          #+#    #+#             */
/*   Updated: 2022/11/13 06:52:55 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

void	ft_putnbr_u(unsigned int nb, int *r)
{
	int	i;

	i = 0;
	if (nb > 9)
	{
		ft_putnbr_u((nb / 10), r);
		ft_putnbr_u((nb % 10), r);
	}
	else
	{
		*r += ft_putchar((nb + '0'));
	}
}
