/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_std.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:38:53 by abboudje          #+#    #+#             */
/*   Updated: 2024/06/13 03:55:57 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_s(char *s)
{
	int	i;

	if (!s)
		return (ft_print_s("(null)"));
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_print_int(int nbr)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_itoa(nbr);
	len = ft_print_s(str);
	free(str);
	return (len);
}

int	ft_print_ui(unsigned int nbr)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_uitoa(nbr);
	len = ft_print_s(str);
	free(str);
	return (len);
}
/* int	main()
{
  	ft_printf("this is %%\n");
	ft_printf("this is %c", 'c');
	ft_printf("this is %s", "hi\n");
	ft_printf("this is %d", 42);
	ft_printf("this is %i", 42); 
	ft_printf("this is %u", 42);
} */