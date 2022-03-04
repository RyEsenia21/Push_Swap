/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cop_str_left_or_right.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:38:25 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:38:28 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Set the sign  +, - or ox in ft_cop_str_right.
*/

void	ft_sign_str(char *str1, char *str2)
{
	if (str1[0] == '-' && str2[0] == '0')
	{
		str1[0] = '0';
		str2[0] = '-';
	}
	if (str1[0] == '+' && str2[0] == '0')
	{
		str1[0] = '0';
		str2[0] = '+';
	}
	if (str1[0] == ' ' && str2[0] == '0')
	{
		str1[0] = '0';
		str2[0] = ' ';
	}
	if (str1[0] == '0' && str1[1] == 'x' && str2[0] == '0')
	{
		str1[0] = '0';
		str1[1] = '0';
		str2[0] = '0';
		str2[1] = 'x';
	}
}

/*
** Copy str1 in str2 whith end.
*/

char	*ft_cop_str_right(char *str1, char *str2)
{
	int	len1;
	int	len2;

	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	if (len1 >= len2)
	{
		ft_strdel(&str2);
		return (str1);
	}
	else
	{
		ft_sign_str(str1, str2);
		while (len2 >= 0 && len1 >= 0)
			str2[len2--] = str1[len1--];
		ft_strdel(&str1);
		return (str2);
	}
}

/*
** Copy str1 in str2 whith begin.
*/

char	*ft_cop_str_left(char *str1, char *str2)
{
	int	len1;
	int	len2;
	int	i;

	i = 0;
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	if (len1 >= len2)
	{
		ft_strdel(&str2);
		return (str1);
	}
	else
	{
		while (i < len1 && i < len2)
		{
			str2[i] = str1[i];
			i++;
		}
		ft_strdel(&str1);
		return (str2);
	}
}
