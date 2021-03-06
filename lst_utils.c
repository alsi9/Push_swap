/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:57:03 by ephantom          #+#    #+#             */
/*   Updated: 2021/12/14 20:59:10 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*find_min_lst(t_list **stack)
{
	t_list	*min;
	t_list	*tmp;

	min = *stack;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->num < min->num)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

t_list	*find_max_lst(t_list **stack)
{
	t_list	*max;
	t_list	*tmp;

	max = *stack;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->num > max->num)
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}

int	check_pos(t_list **stack, t_list *min)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while ((tmp != min) && tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	count_lst(t_list **stack)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	check_sorting(t_list **stack1)
{
	t_list	*tmp;

	tmp = *stack1;
	while (tmp->next)
	{
		if (tmp->num > tmp->next->num)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
