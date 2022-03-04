/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb_ra_rb_rr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:51:14 by ryesenia          #+#    #+#             */
/*   Updated: 2022/03/04 18:51:16 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	op_pa(t_ps *ps)
{
	op_push(&ps->stack_b, &ps->stack_a);
	ft_putendl("pa");
}

void	op_pb(t_ps *ps)
{
	op_push(&ps->stack_a, &ps->stack_b);
	ft_putendl("pb");
}

void	op_ra(t_ps *ps)
{
	op_rotate(&ps->stack_a);
	ft_putendl("ra");
}

void	op_rb(t_ps *ps)
{
	op_rotate(&ps->stack_b);
	ft_putendl("rb");
}

void	op_rr(t_ps *ps)
{
	op_rotate(&ps->stack_a);
	op_rotate(&ps->stack_b);
	ft_putendl("rr");
}
