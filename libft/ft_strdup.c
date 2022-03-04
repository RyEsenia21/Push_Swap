/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:45:34 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:45:36 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*str_cop;

	i = 0;
	while (s1[i])
		i++;
	str_cop = (char *)malloc(sizeof(char) * (i + 1));
	if (str_cop == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str_cop[i] = s1[i];
		i++;
	}
	str_cop[i] = '\0';
	return (str_cop);
}
