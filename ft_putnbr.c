/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 06:42:03 by saboulal          #+#    #+#             */
/*   Updated: 2022/11/13 06:53:46 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

void	ft_putnbr(int nb, int *r)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		*r += ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		*r += ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr((nb / 10), r);
		ft_putnbr((nb % 10), r);
	}
	else
	{
		*r += ft_putchar((nb + '0'));
	}
}
