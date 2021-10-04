/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenys <mdenys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:36:13 by mdenys            #+#    #+#             */
/*   Updated: 2020/11/05 17:22:30 by mdenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ch(char ch)
{
	if (ch == '\t' || ch == '\n' || ch == ' ' || \
		ch == '\v' || ch == '\f' || ch == '\r')
		return (1);
	else
		return (0);
}

int				ft_atoi(const char *str)
{
	int					i;
	unsigned long int	result;
	int					operator;

	i = 0;
	operator = 1;
	result = 0;
	while (ch(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			operator *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > 922337203685477580 && operator == -1)
			return (0);
		else if (result > 922337203685477580 && operator == 1)
			return (-1);
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * operator);
}
