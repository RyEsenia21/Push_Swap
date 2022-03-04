/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:40:08 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:40:11 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fill string number for ft_itoo
*/

static void	ft_fullstr_o(char *str, uintmax_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = ft_itoa(n);
	while (str[i] != '\0')
		i++;
	str[i] = *ptr;
	free(ptr);
}

/*
** Move decimal to octal and fill string
*/

void	ft_itoo(char *str, uintmax_t n)
{
	if (n >= 8)
		ft_itoo(str, n / 8);
	ft_fullstr_o(str, n % 8);
}
