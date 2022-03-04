/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:48:05 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:48:08 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numwrld(char const *s, char c)
{
	unsigned int	num;

	num = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		if (*s == c && *(s + 1) != c)
			num++;
		s++;
	}
	if (*(s - 1) && *(s - 1) != c)
		num++;
	return (num);
}

static size_t	ft_strclen(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static	char	**ft_strfree(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
	return (NULL);
}

int	check_str(const char *s)
{
	if (s == NULL)
		return (0);
	if (*s == '\0')
		return (0);
	return (1);
}

char	**ft_strsplit(char const *s, char c)
{
	int		wrld;
	int		i;
	int		num;
	char	**arr;

	i = 0;
	num = 0;
	if (!check_str(s))
		return (NULL);
	wrld = ft_numwrld(s, c);
	arr = (char **)malloc(sizeof(char *) * (wrld + 1));
	while (i < wrld)
	{
		while (*(s + num) == c && *(s + num) != '\0')
			num++;
		arr[i] = ft_strsub(s, num, ft_strclen((char *)(s + num), c));
		if (arr[i] == NULL)
			return (ft_strfree(arr, i));
		while (*(s + num) != c && *(s + num) != '\0')
			num++;
		i++;
	}
	arr[i] = (void *)0;
	return (arr);
}
