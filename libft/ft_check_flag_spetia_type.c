/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flag_spetia_type.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:38:03 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:38:06 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chack_flag(t_format *lst, char flag)
{
	int	i;

	i = -1;
	while (++i < 5)
		if (lst->flag[i] == flag)
			return (1);
	return (0);
}

void	ft_check_special_type(char *iter, t_format *lst)
{
	if (*iter == 'U' || *iter == 'D' || *iter == 'O')
	{
		lst->size[0] = 'l';
		lst->size[1] = 'l';
	}
}
