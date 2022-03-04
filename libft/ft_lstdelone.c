/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:40:31 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:40:34 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del) (void *, size_t))
{
	size_t	size;
	void	*ptr;

	size = (*alst)->content_size;
	ptr = (*alst)->content;
	del(ptr, size);
	free(*alst);
	*alst = NULL;
}
