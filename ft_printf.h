/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:55:09 by abboudje          #+#    #+#             */
/*   Updated: 2024/06/13 04:01:19 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdlib.h>
# include<stdio.h>
# include<unistd.h>
# include<stdarg.h>
# include<stdint.h>

int		ft_print_c(int c);
int		ft_print_s(char *s);
int		ft_print_int(int nbr);
int		ft_print_ui(unsigned int nbr);
int		ft_print_p(void *ad);
int		re_print_ptr(uintptr_t ad);
int		ft_print_hd(unsigned int nbr, int type);
int		re_print_hexa(unsigned int ad, const char *model);
char	*ui_tostring(unsigned int nbr);
char	*ft_tostring(long nbr);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int nbr);
int		ft_nbrlen(int nbr);
int		ft_nbrlen_ui(unsigned int nbr);
int		ft_printf(const char *foramt, ...);

#endif