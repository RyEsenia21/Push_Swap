/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_wchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:45:27 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:45:30 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_strdup_wchar(const wchar_t *s1)
{
	int		i;
	wchar_t	*str_cop;

	i = 0;
	while (s1[i])
		i++;
	str_cop = (wchar_t *)malloc(sizeof(wchar_t) * (i + 1));
	if (str_cop == NULL)
		return (0);
	i = 0;
	while (s1[i])
	{
		str_cop[i] = s1[i];
		i++;
	}
	str_cop[i] = L'\0';
	return (str_cop);
}
