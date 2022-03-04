/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_new_lst_strchar.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:39:00 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:39:02 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Create new stract with starting values.
*/

t_format	*ft_newstruct(void)
{
	t_format	*lst;
	int			i;

	i = -1;
	lst = (t_format *)malloc(sizeof(t_format));
	if (lst == NULL)
		return (NULL);
	while (++i < 5)
		lst->flag[i] = '\0';
	lst->width = 0;
	lst->exactness = 0;
	lst->dot = 0;
	lst->size[0] = '\0';
	lst->size[1] = '\0';
	lst->size[2] = '\0';
	lst->len_str = 0;
	return (lst);
}

/*
** Create new string  with starting chars.
*/

char	*ft_strnew_char(int c, size_t len)
{
	char	*ptr;

	ptr = ft_strnew(len);
	ptr = (char *)ft_memset((char *)ptr, c, len);
	return (ptr);
}
