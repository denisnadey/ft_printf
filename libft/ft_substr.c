/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenys <mdenys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:21:46 by mdenys            #+#    #+#             */
/*   Updated: 2020/11/02 16:58:52 by mdenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*test;

	test = NULL;
	if (s)
	{
		test = malloc(sizeof(*s) * len + 1);
		if (test && start <= (unsigned int)ft_strlen((char *)s))
		{
			ft_strlcpy(test, s + start, len + 1);
			return (void *)(test);
		}
	}
	return (void *)(test);
}
