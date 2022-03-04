/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_wchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:47:00 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:47:03 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_strncpy_wchar(wchar_t *dst, const wchar_t *src, size_t len)
{
	size_t	i;
	int		bl;

	i = 0;
	bl = 1;
	while (i < len)
	{
		if (src[i] == '\0')
			bl = 0;
		if (bl)
			dst[i] = src[i];
		else
			dst[i] = '\0';
		i++;
	}
	return (dst);
}
