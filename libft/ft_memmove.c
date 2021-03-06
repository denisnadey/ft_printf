/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenys <mdenys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:04:51 by mdenys            #+#    #+#             */
/*   Updated: 2020/11/04 18:41:12 by mdenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *source, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned int	i;

	i = 0;
	d = dst;
	s = (unsigned char *)source;
	if (!n)
		return (dst);
	else if (s < d)
	{
		while (++i <= n)
			d[n - i] = s[n - i];
	}
	else if (s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
