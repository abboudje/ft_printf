/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 02:54:07 by abboudje          #+#    #+#             */
/*   Updated: 2024/06/13 17:24:47 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(char type, va_list args)
{
	if (type == '%')
		return (ft_print_c('%'));
	if (type == 'c')
		return (ft_print_c(va_arg(args, int)));
	if (type == 's')
		return (ft_print_s(va_arg(args, char *)));
	if (type == 'p')
		return (ft_print_p(va_arg(args, void *)));
	if (type == 'i' || type == 'd')
		return (ft_print_int(va_arg(args, int)));
	if (type == 'u')
		return (ft_print_ui(va_arg(args, unsigned int)));
	if (type == 'x')
		return (ft_print_hd(va_arg(args, unsigned int), 0));
	if (type == 'X')
		return (ft_print_hd(va_arg(args, unsigned int), 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	char	type;
	va_list	args;
	int		i;
	int		len;

	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		type = format[i + 1];
		if (format[i] != '%')
			len += write(1, (format + i), 1);
		else
		{
			len += ft_parse(type, args);
			i++;
		}
		i++;
	}
	va_end(args);
	return (len);
}

/* int	main()
{
	int	reslt;
	int	reslt2;
	
	reslt = 0;
	reslt2 = reslt;
	printf("hello");
	reslt = ft_printf("%p", 0);
	ft_printf("%d\n", reslt);
	
	reslt2 = printf("%p", 0);
	printf("%d\n", reslt2); 
	
	return (0);
} */