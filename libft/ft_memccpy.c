/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:40:59 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:41:01 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*strd;
	unsigned char	*strs;

	i = 0;
	strd = (unsigned char *)dst;
	strs = (unsigned char *)src;
	while (i < n)
	{
		((unsigned char *)strd)[i] = ((unsigned char *)strs)[i];
		if (((unsigned char *)strs)[i] == (unsigned char)c)
		{
			dst = strd;
			return (&dst[i + 1]);
		}
		i++;
	}
	return (NULL);
}
