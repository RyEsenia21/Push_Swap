/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:49:00 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:49:04 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 4096

# include "libft.h"
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_lst
{
	char			*tail;
	int				fd;
	struct s_lst	*next;
	struct s_lst	*first_lst;
}					t_newlst;

int					get_next_line(const int fd, char **line);

#endif
