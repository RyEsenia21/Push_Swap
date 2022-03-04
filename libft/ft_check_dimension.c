/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dimension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:37:56 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:38:00 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

intmax_t	ft_check_dimension(t_format *lst, va_list lst_arg)
{
	intmax_t	arg;

	arg = va_arg(lst_arg, intmax_t);
	if (lst->size[0] == 'h' && lst->size[1] == '\0')
		arg = (short int)arg;
	else if (lst->size[0] == 'h' && lst->size[1] == 'h')
		arg = (signed char)arg;
	else if (lst->size[0] == 'l' && lst->size[1] == '\0')
		arg = (long int)arg;
	else if (lst->size[0] == 'l' && lst->size[1] == 'l')
		arg = (long long int)arg;
	else if (lst->size[0] == 'j' && lst->size[1] == '\0')
		arg = (intmax_t)arg;
	else if (lst->size[0] == 'z' && lst->size[1] == '\0')
		arg = (size_t)arg;
	else
		arg = (int)arg;
	return (arg);
}
