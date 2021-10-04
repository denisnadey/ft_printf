/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenys <mdenys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:35:27 by mdenys            #+#    #+#             */
/*   Updated: 2020/11/04 17:38:29 by mdenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int ch, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	unsigned int		i;

	i = 0;
	d = dst;
	s = (unsigned char *)src;
	if (!n)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)ch)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
