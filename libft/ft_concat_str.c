/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:38:18 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:38:21 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_concat_str(char *str1, char *str2)
{
	char	*result;
	int		i;
	int		j;

	i = -1;
	j = 0;
	result = (char *)malloc(sizeof(char)
			* (ft_strlen(str1) + ft_strlen(str2) + 1));
	while (str1[++i] != '\0')
	{
		result[j] = str1[i];
		j++;
	}
	free(str1);
	free(str2);
	i = 0;
	while (str2[i] != '\0')
	{
		result[j] = str2[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}
