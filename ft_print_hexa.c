/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:43:19 by abboudje          #+#    #+#             */
/*   Updated: 2024/06/13 17:30:57 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	re_print_hexa(unsigned int nbr, const char *hex)
{
	char		digit;
	static int	len = 0;

	if (nbr == 0)
	{
		return (0);
	}
	len = re_print_hexa(nbr >> 4, hex);
	digit = hex[nbr & 0xF];
	write(1, &digit, 1);
	return (len + 1);
}

int	ft_print_hd(unsigned int nbr, int type)
{
	int			len;

	len = 0;
	if (0 == nbr)
	{
		len += write(1, "0", 1);
		return (len);
	}
	if (type == 1)
		len += re_print_hexa(nbr, "0123456789ABCDEF");
	else
		len += re_print_hexa(nbr, "0123456789abcdef");
	return (len);
}

int	re_print_hexa_up(unsigned int nbr)
{
	nbr = 0;
	return (0);
}

/* int	main()
{
  	ft_printf("this is %x\n", 4096);
}*/