/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:51:06 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:55:33 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_cycle_sort(t_ps *ps)
{
	t_node	*node;

	determine_minimal_el_a(ps);
	node = ps->stack_a.top;
	while (node && node->next)
	{
		if (node->data > node->next->data && node->next != ps->stack_a.min)
			return (0);
		node = node->next;
	}
	if (ps->stack_a.top == ps->stack_a.min)
		return (1);
	if (ps->stack_a.top->data < ps->stack_a.bott->data)
		return (0);
	return (1);
}

void	empty_stack_b(t_ps *ps)
{
	t_node	*min_el;

	while (ps->stack_b.count > 0)
	{
		determine_minimal_el_a(ps);
		min_el = search_min_el_b(ps);
		move_min_el(ps);
		op_pa(ps);
		recount_number_stack(ps->stack_a.top);
		recount_number_stack(ps->stack_b.top);
	}
}

void	final_sort(t_ps *ps)
{
	if (ps->stack_a.min->data <= ps->stack_a.count / 2)
		while (ps->stack_a.top != ps->stack_a.min)
			op_ra(ps);
	else
		while (ps->stack_a.top != ps->stack_a.min)
			op_rra(ps);
}

void	algoritm(t_ps *ps)
{
	while (!is_cycle_sort(ps) && ps->stack_a.count > 3)
	{
		op_pb(ps);
		recount_number_stack(ps->stack_a.top);
		recount_number_stack(ps->stack_b.top);
	}
	sort_elemts(ps, &ps->stack_a);
	empty_stack_b(ps);
	determine_minimal_el_a(ps);
	final_sort(ps);
	delete_stack(&ps->stack_a);
	delete_stack(&ps->stack_b);
}

int	main(int ac, char **av)
{
	t_ps	ps;

	if (ac < 2)
		sys_err("To few arguments.\n");
	init(&ps);
	processing_args(&ps, ac, av);
	algoritm(&ps);
	return (0);
}
