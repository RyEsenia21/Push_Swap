/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numwr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:41:58 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:42:01 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numwr(char const *s, char c)
{
	int	num;

	num = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		if (*s == c && *(s + 1) != c)
			num++;
		s++;
	}
	if (*(s - 1) && *(s - 1) != c)
		num++;
	return (num);
}
