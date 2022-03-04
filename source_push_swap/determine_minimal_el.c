/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   determine_minimal_el.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:51:00 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:55:19 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	op_ss(t_ps *ps)
{
	op_swap(&ps->stack_a);
	op_swap(&ps->stack_b);
	ft_putendl("ss");
}

void	recount_number_stack(t_node *node)
{
	size_t	number;

	number = -1;
	while (node)
	{
		node->number = ++number;
		node = node->next;
	}
}

void	to_top_with_rr(t_ps *ps)
{
	if (ps->stack_b.bl_rr == 1)
	{
		op_rr(ps);
		ps->stack_b.bl_rr = 0;
	}
	else
		op_ra(ps);
}

void	move_all_to_stack_a(t_ps *ps)
{
	while (ps->stack_b.count > 0)
		op_pa(ps);
}

void	determine_minimal_el_a(t_ps *ps)
{
	t_node	*node;

	node = ps->stack_a.top;
	ps->stack_a.min = node;
	while (node)
	{
		if (ps->stack_a.min->data > node->data)
			ps->stack_a.min = node;
		node = node->next;
	}
}
