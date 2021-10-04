/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenys <mdenys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:55:27 by mdenys            #+#    #+#             */
/*   Updated: 2020/11/04 17:40:00 by mdenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char		*d;
	unsigned int		i;

	i = 0;
	d = (unsigned char*)arr;
	while (i < n)
	{
		if (d[i] == (unsigned char)c)
		{
			return (void*)(d + i);
		}
		i++;
	}
	return (NULL);
}
