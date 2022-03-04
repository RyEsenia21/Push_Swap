/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_string_left.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:38:39 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:38:42 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy str2 в str1 whith begien both string.
*/

char	*ft_copy_string_left(char *str1, char *str2)
{
	int	len1;
	int	len2;
	int	i;

	i = 0;
	len1 = (int)ft_strlen(str1);
	len2 = (int)ft_strlen(str2);
	if (len1 >= len2)
	{
		ft_strdel(&str2);
		return (str1);
	}
	else
	{
		while (i < len1 && i < len2)
		{
			str2[i] = str1[i];
			i++;
		}
		ft_strdel(&str1);
		return (str2);
	}
}
