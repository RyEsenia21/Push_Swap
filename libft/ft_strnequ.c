/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:47:12 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:47:17 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (!*s1 && !*s2)
		return (1);
	while ((*s1 || *s2) && i < n)
	{
		if (*s1 != *s2 || i == n)
			return (0);
		s1++;
		s2++;
		i++;
	}
	return (1);
}
