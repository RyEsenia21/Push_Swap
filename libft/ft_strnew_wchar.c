/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_wchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:47:27 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:47:29 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_strnew_wchar(size_t size)
{
	wchar_t	*str;

	if (size == (size_t)(-1))
		return (NULL);
	str = (wchar_t *)malloc(sizeof(wchar_t) * (size + 1));
	if (str == NULL)
		return (NULL);
	str = (wchar_t *)ft_memset(str, '\0', size + 1);
	return (str);
}
