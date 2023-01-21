/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhellad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:19:39 by akhellad          #+#    #+#             */
/*   Updated: 2022/11/10 21:18:55 by akhellad         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;
	t_list	*buff;

	new = *lst;
	if (new && del)
	{
		while (new)
		{
			del(new -> content);
			buff = new->next;
			free(new);
			new = buff;
		}
	}
	*lst = NULL;
}
