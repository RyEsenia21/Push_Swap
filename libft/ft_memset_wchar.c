/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_wchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:41:40 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:41:44 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset_wchar(void *b, wchar_t c, size_t len)
{
	wchar_t	*str;
	size_t	i;

	if (len == 0)
		return (b);
	i = 0;
	str = b;
	while (i < len)
	{
		str[i] = (wchar_t)c;
		i++;
	}
	return (b);
}
