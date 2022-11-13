/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:02:07 by saboulal          #+#    #+#             */
/*   Updated: 2022/11/13 01:56:52 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include<stdarg.h>
#include<unistd.h>
#include<stdio.h>

int ft_printf(char const *str, ...);
int ft_putchar(int c);
int ft_putstr(char *str);
void ft_putnbr(int nb,int *r);
void ft_putnbr_u(unsigned int nb,int *r);
void ft_putnbr_base(unsigned int nb,int *r, char *base);
void ft_putnbr_base_add(unsigned long long nb,int *r, char *base);


# endif