/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_decimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:42:28 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:42:31 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_negative_decimal(t_format *lst, intmax_t arg)
{
	char	*str_wid;
	char	*str_exa;
	char	*str;

	if (ft_chack_flag(lst, '0') && !ft_chack_flag(lst, '-')
		&& lst->exactness == 0)
		str_wid = ft_strnew_char('0', lst->width);
	else
		str_wid = ft_strnew_char(' ', lst->width);
	str = ft_itoa(arg);
	str_exa = ft_strnew_char('0', lst->exactness + 1);
	str = ft_cop_str_right(str, str_exa);
	if (ft_chack_flag(lst, '-'))
		str = ft_cop_str_left(str, str_wid);
	else
		str = ft_cop_str_right(str, str_wid);
	lst->len_str = ft_strlen(str);
	ft_putstr(str);
	ft_strdel(&str);
}

void	ft_plus_or_space(t_format *lst, char **str)
{
	char	*s;

	if (ft_chack_flag(lst, '+'))
	{
		s = ft_strnew_char('+', ft_strlen(*str) + 1);
		*str = ft_cop_str_right(*str, s);
	}
	else
	{
		s = ft_strnew_char(' ', ft_strlen(*str) + 1);
		*str = ft_cop_str_right(*str, s);
	}
}

void	ft_source_decimal(t_format *lst, char *str, char *str_wid)
{
	if (ft_chack_flag(lst, '-'))
		str = ft_cop_str_left(str, str_wid);
	else
		str = ft_cop_str_right(str, str_wid);
	ft_lenstr_putstr_delstr(lst, str);
}

void	ft_positive_decimal(t_format *lst, uintmax_t arg)
{
	char	*str_wid;
	char	*str_exa;
	char	*str;

	if (ft_chack_flag(lst, '0') && !ft_chack_flag(lst, '-')
		&& lst->exactness == 0)
		str_wid = ft_strnew_char('0', lst->width);
	else
		str_wid = ft_strnew_char(' ', lst->width);
	if (arg == 0 && lst->dot == 1 && !ft_chack_flag(lst, '+'))
		str = ft_strnew_char(' ', 0);
	else
		str = ft_itoa(arg);
	if (ft_chack_flag(lst, '+') || ft_chack_flag(lst, ' '))
	{
		ft_plus_or_space(lst, &str);
		str_exa = ft_strnew_char('0', lst->exactness + 1);
	}
	else
		str_exa = ft_strnew_char('0', lst->exactness);
	str = ft_cop_str_right(str, str_exa);
	ft_source_decimal(lst, str, str_wid);
}

void	ft_put_decimal(t_format *lst, va_list lst_arg)
{
	intmax_t	arg;

	arg = ft_check_dimension(lst, lst_arg);
	if (arg >= 0)
		ft_positive_decimal(lst, arg);
	else
		ft_negative_decimal(lst, arg);
}
