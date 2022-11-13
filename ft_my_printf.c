/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_my_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:52:24 by saboulal          #+#    #+#             */
/*   Updated: 2022/11/13 01:56:47 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(int c)
{
    write(1,&c,1);
    return (1);
}

int ft_putstr(char *str)
{
    int i;

    i = 0;
    if (!str)
    {
        write(1, "(null)" , 6);
        return (6);
    }
    while (*str)
        i += ft_putchar(*str++);
    return (i);
}

void ft_putnbr(int nb,int *r)
{
    int i;
     
     i = 0;
     if (nb == -2147483648)
     {
        *r += ft_putstr("-2147483648");
        return ;
     }
     if (nb < 0)
     {
        *r += ft_putchar('-');
        nb = - nb;
     }
     if (nb > 9)
     {
        ft_putnbr((nb / 10),r);
        ft_putnbr((nb % 10),r);
     }
     else 
     {
         *r +=  ft_putchar((nb + '0'));
     }
}
void ft_putnbr_u(unsigned int nb,int *r)
{
    int i;
     
     i = 0;
     if (nb > 9)
     {
        ft_putnbr_u((nb / 10),r);
         ft_putnbr_u((nb % 10),r);
     }
     else 
     {
         *r += ft_putchar((nb + '0'));
     }
}

void ft_putnbr_base(unsigned int nb,int *r, char *base)
{
    
    if (nb > 15)
    {
        ft_putnbr_base(nb / 16,r,base);
        ft_putnbr_base(nb % 16,r,base);
        
    }
     else
     {
         *r += ft_putchar(base[nb]);
     }
     
}

void ft_putnbr_base_add(unsigned long long nb,int *r, char *base)
{
    if (nb > 15)
    {
        ft_putnbr_base_add(nb / 16,r,base);
         ft_putnbr_base_add(nb % 16,r,base);
        
    }
     else
     {
         *r += ft_putchar(base[nb]);
     }
}