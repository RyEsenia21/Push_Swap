/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_octotorp_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:42:04 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:42:06 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_octotorp_hex(char **str)
{
	char	*s;

	s = *str;
	*str = ft_strjoin("0x", *str);
	free(s);
}
