/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_flag_type_size.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:39:15 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:39:18 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isflag(char c)
{
	if (c == '-' || c == '+' || c == ' ' || c == '#' || c == '0')
		return (1);
	else
		return (0);
}

int	ft_istype(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == '%'
		|| c == 'o' || c == 'u' || c == 'x' || c == 'X' || c == 'C' || c == 'U'
		|| c == 'S' || c == 'C' || c == 'D' || c == 'O' || c == 'f' || c == 'F')
		return (1);
	else
		return (0);
}

int	ft_issize(char c)
{
	if (c == 'l' || c == 'h' || c == 'j' || c == 'z' || c == 'L')
		return (1);
	else
		return (0);
}
