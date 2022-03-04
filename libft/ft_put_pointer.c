/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:42:56 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:42:58 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_del_str(t_format *lst, char **str)
{
	lst->len_str = ft_strlen(*str);
	ft_putstr(*str);
	ft_strdel(str);
}

/*
** Input pointer.
*/

void	ft_pointer(t_format *lst, uintmax_t arg)
{
	char	*str_wid;
	char	*str_exa;
	char	*str;

	if (ft_chack_flag(lst, '0') && lst->exactness == 0
		&& !ft_chack_flag(lst, '-'))
		str_wid = ft_strnew_char('0', lst->width);
	else
		str_wid = ft_strnew_char(' ', lst->width);
	if (arg == 0 && lst->dot == 1)
		str = ft_strnew_char(' ', 0);
	else
	{
		str = ft_strnew(23);
		ft_itox(str, arg);
	}
	str_exa = ft_strnew_char('0', lst->exactness);
	str = ft_copy_string_right(str, str_exa);
	ft_octotorp_hex(&str);
	if (ft_chack_flag(lst, '-'))
		str = ft_copy_string_left(str, str_wid);
	else
		str = ft_copy_string_right(str, str_wid);
	ft_put_del_str(lst, &str);
}

/*
** Выводит на экран поинтер в шеснацетиричной форме
*/

void	ft_put_pointer(t_format *lst, va_list lst_arg)
{
	uintmax_t	arg;

	arg = va_arg(lst_arg, long long int);
	ft_pointer(lst, arg);
}
