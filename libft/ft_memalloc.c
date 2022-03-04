/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:40:53 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:40:56 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mal;

	mal = (void *)malloc(sizeof(void) * size);
	if (mal == NULL)
		return (NULL);
	ft_bzero(mal, size);
	return (mal);
}
