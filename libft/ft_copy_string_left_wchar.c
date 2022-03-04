/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_string_left_wchar.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:38:32 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:38:35 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy str2 в str1 whith begien both string.
*/

wchar_t	*ft_copy_string_left_wchar(wchar_t *str1, wchar_t *str2)
{
	int	len1;
	int	len2;
	int	i;

	i = 0;
	len1 = (int)ft_strlen_wchar(str1);
	len2 = (int)ft_strlen_wchar(str2);
	if (len1 >= len2)
	{
		ft_strdel_wchar(&str2);
		return (str1);
	}
	else
	{
		while (i < len1 && i < len2)
		{
			str2[i] = str1[i];
			i++;
		}
		ft_strdel_wchar(&str1);
		return (str2);
	}
}
