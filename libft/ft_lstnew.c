/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:40:48 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:40:50 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newl;

	newl = (t_list *)malloc(sizeof(t_list));
	if (newl == NULL)
		return (NULL);
	if (!content)
	{
		newl->content = NULL;
		newl->content_size = 0;
	}
	else
	{
		newl->content = ft_memalloc(content_size);
		if (newl->content == NULL)
			return (NULL);
		newl->content = ft_memmove(newl->content, content, content_size);
		newl->content_size = content_size;
	}
	newl->next = NULL;
	return (newl);
}
