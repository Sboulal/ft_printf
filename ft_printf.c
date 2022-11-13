/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:05:48 by saboulal          #+#    #+#             */
/*   Updated: 2022/11/13 03:59:38 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void check(int *res,va_list *ap, char const *str, int *i)
{
	if(str[*i] == 'c')
		*res+= ft_putchar(va_arg(*ap,int));
	else if (str[*i] == 's')
		*res += ft_putstr(va_arg(*ap,char *));
	else if (str[*i] == 'd' || str[*i] == 'i')
		ft_putnbr(va_arg(*ap,int),res);
	else if (str[*i] == 'u')
		ft_putnbr_u(va_arg(*ap,unsigned int),res);
	else if (str[*i] == 'x')
		ft_putnbr_base(va_arg(*ap,unsigned int),res,"0123456789abcdef");
	else if (str[*i] == 'X')
		ft_putnbr_base(va_arg(*ap,unsigned int),res,"0123456789ABCDEF"); 
	else if (str[*i] == 'p')
	{
		*res += ft_putstr("0x");
		ft_putnbr_base_add(va_arg(*ap,unsigned long long),res,"0123456789abcdef");
	}
	else if (str[*i] == '%')
		*res += ft_putchar('%');
	else
		i--;
}

int ft_printf(char const *str, ...)
{
    int res ;
	int i;
    
	res = 0;
    i = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_list ap;
    va_start(ap,str);
     while (str[i])
	 {
        if (str[i] == '%')
		{
			i++;
			check(&res,&ap,str, &i);
		}
		else
			res+= ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (res);
}



int main()
{
	ft_printf("first");

	
	printf("hello ");
	printf("everyone ");
	printf("everyone ");
	printf("everyone ");
	printf("everyone ");
	printf("everyone ");
	printf("everyone ");
	printf("everyone ");
	printf("everyone");
	printf("everyone ");
	printf("everyone ");
	printf("everyone ");
	printf("everyone ");
	printf("everyone ");

}