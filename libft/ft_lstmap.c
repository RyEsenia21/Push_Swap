/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:40:42 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:40:45 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*firptr;

	if (!lst)
		return (NULL);
	newlist = f(lst);
	firptr = newlist;
	while (lst->next)
	{
		lst = lst->next;
		newlist->next = f(lst);
		if (newlist->next == NULL)
			return (NULL);
		newlist = newlist->next;
	}
	return (firptr);
}
