/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenys <mdenys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:51:16 by mdenys            #+#    #+#             */
/*   Updated: 2020/12/16 00:57:51 by mdenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_put_u(t_printf *list, va_list *name)
{
	unsigned int	value;

	value = va_arg(*name, unsigned int);
	ft_write_u(list, value);
	return (list->count);
}
