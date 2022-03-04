/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:43:44 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:43:47 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_recprint_fd(char *str, int neg, int fd)
{
	int		i;

	i = ft_strlen(str) - 1;
	if (neg == -1)
		ft_putchar_fd('-', fd);
	if (*str == '\0')
		ft_putchar_fd('0', fd);
	while (i >= 0)
	{
		ft_putchar_fd(str[i], fd);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;
	char			str[12];
	int				i;
	int				neg;

	i = 0;
	num = n;
	neg = 0;
	if (n < 0)
	{
		neg = -1;
		num = num * (-1);
	}
	while (num != 0)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	str[i] = '\0';
	ft_recprint_fd(str, neg, fd);
}
