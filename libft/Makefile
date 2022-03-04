# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: widraugr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/29 13:07:44 by widraugr          #+#    #+#              #
#    Updated: 2021/08/14 14:46:32 by mixfon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

NAMEBIN = libft

FILE_C =	ft_atoi.c\
			ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
			ft_isprint.c ft_itoa.c ft_memalloc.c ft_memccpy.c ft_memchr.c\
			ft_memcmp.c	ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c\
			ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c\
			ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c\
			ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c\
			ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c\
		   	ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c\
			ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c\
			ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c\
			ft_tolower.c ft_toupper.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c\
			ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_numwr.c ft_strfr.c ft_strcl.c\
			ft_strnjoin.c ft_strnjoinfree.c ft_strfr.c ft_itoo.c ft_itox.c\
			ft_printf.c	type_char.c type_string.c ft_un_itoa.c type_float.c\
			type_float2.c ft_concat_str.c ft_float_inf.c ft_itoa_llint.c\
			ft_copy_string_left.c ft_copy_string_right.c ft_copy_string_left_wchar.c\
			ft_copy_string_right_wchar.c ft_strdup_wchar.c ft_strnew_char_wchar.c\
			ft_strnew_wchar.c ft_strncpy_wchar.c ft_strdel_wchar.c ft_strlen_wchar.c\
			ft_putchar_wchar.c ft_putstr_wchar.c ft_put_pointer.c ft_octotorp_hex.c\
			ft_put_percent.c ft_check_un_dimension.c ft_put_unsigned.c\
			ft_create_new_lst_strchar.c ft_put_octal.c ft_put_hexadecimal.c\
			ft_cop_str_left_or_right.c ft_put_decimal.c ft_check_dimension.c\
			ft_read_format.c ft_is_flag_type_size.c ft_check_flag_spetia_type.c\
			ft_memset_wchar.c ft_multi_strdup.c get_next_line.c sys_err.c

FLAGS = -g -Wall -Wextra -Werror -I .

VPATH = $(DIROBJ)

DIROBJ = ./obj/

OBJ = $(addprefix $(DIROBJ), $(FILE_C:.c=.o))

all : $(NAME)

$(NAME): $(DIROBJ) $(OBJ)
	@ar cr $(NAME) $(OBJ)
	@tput el
	@ranlib $(NAME)
	@tput setaf 2
	@echo "$(NAME) builded successful!"
	@tput cnorm
	@tput sgr0

$(DIROBJ)%.o : %.c 
	@tput civis
	@tput sc
	@gcc $(FLAGS) -c $< -o $@ 
	@tput setaf 2
	@echo -n $<
	@tput el
	@tput rc


$(DIROBJ):
	@mkdir -p $(DIROBJ)

clean:
	@/bin/rm -rf $(DIROBJ)
	
fclean: clean
	@/bin/rm -f $(NAME)
	
re: fclean all 
