/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:42:50 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:42:53 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_percent(t_format *lst)
{
	char	*str_wid;
	char	*str;

	if (ft_chack_flag(lst, '0') && lst->exactness == 0
		&& !ft_chack_flag(lst, '-'))
		str_wid = ft_strnew_char('0', lst->width);
	else
		str_wid = ft_strnew_char(' ', lst->width);
	str = ft_strnew_char('%', 1);
	if (ft_chack_flag(lst, '-'))
		str = ft_copy_string_left(str, str_wid);
	else
		str = ft_copy_string_right(str, str_wid);
	lst->len_str = ft_strlen(str);
	ft_putstr(str);
	ft_strdel(&str);
}
