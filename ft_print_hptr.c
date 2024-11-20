/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:42:50 by abboudje          #+#    #+#             */
/*   Updated: 2024/06/13 03:48:02 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	re_print_ptr(uintptr_t ad)
{
	const char	*hex = "0123456789abcdef";
	char		digit;
	static int	len = 0;

	if (ad == 0)
		return (0);
	len = re_print_ptr(ad >> 4);
	digit = hex[ad & 0xF];
	write(1, &digit, 1);
	return (len + 1);
}

int	ft_print_p(void *arg)
{
	int			len;
	uintptr_t	ad;

	len = 0;
	ad = (uintptr_t)arg;
	if (0 == ad)
	{
		len += write(1, "(nil)", 5);
		return (len);
	}
	len += write(1, "0x", 2);
	len += re_print_ptr(ad);
	return (len);
}

/* int main()
{
	int val;
	val = printf("%p", &val);
	printf("%d \n", val);
	val = ft_printf("%p", &val);
	printf("val is :%d:", val);
	return (0);
	//ft_printf("%p", &val);
} */