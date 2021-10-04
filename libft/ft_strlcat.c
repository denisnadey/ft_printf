/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenys <mdenys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:10:24 by mdenys            #+#    #+#             */
/*   Updated: 2020/11/05 16:58:02 by mdenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	if (!dst && !src)
		return (0);
	len = ft_strlen(dst);
	i = 0;
	if (size < len)
		return (ft_strlen((char *)src) + size);
	if (size)
	{
		while (src[i] && len + 1 < size)
			dst[len++] = src[i++];
		dst[len] = '\0';
	}
	while (src[i])
	{
		i++;
		len++;
	}
	return (len);
}
