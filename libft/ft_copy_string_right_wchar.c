/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_string_right_wchar.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:38:48 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:38:50 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_copy_string_right_wchar(wchar_t *str1, wchar_t *str2)
{
	int	len1;
	int	len2;

	len1 = (int)ft_strlen_wchar(str1);
	len2 = (int)ft_strlen_wchar(str2);
	if (len1 >= len2)
	{
		ft_strdel_wchar(&str2);
		return (str1);
	}
	else
	{
		while (len2 >= 0 && len1 >= 0)
			str2[len2--] = str1[len1--];
		ft_strdel_wchar(&str1);
		return (str2);
	}
}
