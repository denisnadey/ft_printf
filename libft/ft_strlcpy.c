/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenys <mdenys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:26:31 by mdenys            #+#    #+#             */
/*   Updated: 2020/11/05 16:57:58 by mdenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	if (!dst && !src)
		return (0);
	while (src[count] != '\0')
	{
		++count;
	}
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1) && src[i])
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = '\0';
	}
	return (count);
}
