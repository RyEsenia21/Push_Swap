/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multi_strdup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:41:52 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:41:55 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_multi_strdup(int count, ...)
{
	va_list		list_arg;
	int			i;
	size_t		len;
	char		*str;
	const char	*ptr;

	i = -1;
	len = 0;
	va_start(list_arg, count);
	while (++i < count)
		len += ft_strlen(va_arg(list_arg, const char *));
	va_end(list_arg);
	str = ft_strnew(len);
	va_start(list_arg, count);
	i = -1;
	while (++i < count)
	{
		ptr = va_arg(list_arg, const char *);
		if (ptr == NULL)
			continue ;
		str = ft_strncat(str, ptr, ft_strlen(ptr));
	}
	va_end(list_arg);
	return (str);
}
