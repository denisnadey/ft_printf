/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenys <mdenys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:44:25 by mdenys            #+#    #+#             */
/*   Updated: 2020/11/05 18:00:06 by mdenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	unsigned char	*d;
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen((char *)str);
	i = 0;
	d = (unsigned char *)str;
	if (str)
	{
		while (d[i] != (unsigned char)ch && i < len)
		{
			i++;
		}
		if (d[i] == (unsigned char)ch)
		{
			return (void *)(d + i);
		}
		return (0);
	}
	return (0);
}
