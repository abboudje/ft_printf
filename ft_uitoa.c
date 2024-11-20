/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:10:18 by abboudje          #+#    #+#             */
/*   Updated: 2024/06/13 03:47:15 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ui_tostring(unsigned int nbr)
{
	char	*ptr;
	int		len;

	len = ft_nbrlen_ui(nbr);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	while (nbr)
	{
		ptr[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (ptr);
}

char	*ft_uitoa(unsigned int nbr)
{
	char	*ptr;

	if (nbr == 0)
	{
		ptr = malloc(2 * sizeof(char));
		if (!ptr)
			return (NULL);
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	return (ui_tostring(nbr));
}

/* 
 int	main(int ac, char **av)
{
	char	*result;

	if (ac != 2)
		return (-1);
	result = ft_itoa(atoi(av[1]));
	printf("%s \n", result);
	return (0);
}  */