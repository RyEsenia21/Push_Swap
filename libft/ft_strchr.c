/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:44:31 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:44:34 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	i++;
	while (j < i)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
		j++;
	}
	return (NULL);
}
