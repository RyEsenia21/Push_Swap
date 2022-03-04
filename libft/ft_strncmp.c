/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:46:54 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:46:57 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	str1;
	size_t	str2;

	i = 0;
	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	if (n == 0)
		return (0);
	while (i < str1 && i < str2 && i < n - 1)
	{
		if (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
			i++;
		else
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
