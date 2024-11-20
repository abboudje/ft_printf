/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:33:16 by abboudje          #+#    #+#             */
/*   Updated: 2024/06/13 04:00:36 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

int	ft_nbrlen_ui(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}
