/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:48:11 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:48:14 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t			i;
	size_t			l;
	unsigned char	*strh;
	unsigned char	*strn;

	strh = (unsigned char *)haystack;
	strn = (unsigned char *)needle;
	i = 0;
	if (*strn == '\0')
		return ((char *)haystack);
	while (strh[i] != '\0')
	{
		l = 0;
		while (strn[l] == strh[i + l])
		{
			if (strn[l + 1] == '\0')
				return ((char *)strh + i);
			l++;
		}
		i++;
	}
	return (NULL);
}
