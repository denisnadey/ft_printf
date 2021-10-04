/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenys <mdenys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 10:24:40 by mdenys            #+#    #+#             */
/*   Updated: 2020/10/29 17:01:59 by mdenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int val, size_t num)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (num)
	{
		tmp = dest;
		while (i < num)
		{
			tmp[i] = val;
			i++;
		}
	}
	return (dest);
}
