/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:47:59 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:48:02 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	int			j;
	const char	*ptr;

	i = 0;
	j = 0;
	ptr = NULL;
	while (s[i] != '\0')
		i++;
	i++;
	while (j < i)
	{
		if (*s == (unsigned char)c)
			ptr = s;
		s++;
		j++;
	}
	return ((char *)ptr);
}
