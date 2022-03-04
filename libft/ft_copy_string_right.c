/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_string_right.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:38:54 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:38:56 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_copy_string_right(char *str1, char *str2)
{
	int	len1;
	int	len2;

	len1 = (int)ft_strlen(str1);
	len2 = (int)ft_strlen(str2);
	if (len1 >= len2)
	{
		ft_strdel(&str2);
		return (str1);
	}
	else
	{
		while (len2 >= 0 && len1 >= 0)
			str2[len2--] = str1[len1--];
		ft_strdel(&str1);
		return (str2);
	}
}
