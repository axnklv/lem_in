/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_mem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzboncak <dzboncak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:23:51 by dzboncak          #+#    #+#             */
/*   Updated: 2019/10/17 20:26:11 by dzboncak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	remove_path(t_list_of_paths *path)
{
	t_list_of_paths *cur;
	t_list_of_paths	*next;

	cur = path;
	while (cur != NULL)
	{
		next = cur->next;
		delete_path(cur->path);
		ft_memdel((void**)&cur);
		cur = next;
	}
}

void	remove_nodes(t_lem *lem)
{
	t_list_of_nodes *cur;
	t_list_of_nodes *next;

	cur = lem->nodes;
	while (cur != NULL)
	{
		next = cur->next;
		delete_path(cur->node->links);
		free(cur->node->name);
		free(cur->node);
		cur = next;
	}
	delete_path(lem->nodes);
}

void	clear_mem(t_lem *lem, t_list_of_paths *path1, t_list_of_paths *path2)
{
	remove_path(path1);
	remove_path(path2);
	remove_nodes(lem);
}
