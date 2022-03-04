/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_char_wchar.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:47:21 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:47:23 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Create string type wchar_t
*/

wchar_t	*ft_strnew_char_wchar(wchar_t c, size_t len)
{
	wchar_t	*ptr;

	ptr = ft_strnew_wchar(len);
	ptr = (wchar_t *)ft_memset_wchar((wchar_t *)ptr, c, len);
	return (ptr);
}
