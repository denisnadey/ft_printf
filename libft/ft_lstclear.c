/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenys <mdenys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:53:46 by mdenys            #+#    #+#             */
/*   Updated: 2020/11/04 21:34:51 by mdenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new;

	if (*lst)
	{
		while (*lst)
		{
			del((*lst)->content);
			new = *lst;
			*lst = new->next;
			free(new);
		}
	}
	*lst = NULL;
}
