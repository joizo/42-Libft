/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_m.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 19:09:00 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/06/10 19:09:02 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs_m(int n)
{
	if (!n)
		return (0);
	if (n < 0)
		return (n = n * -1);
	else
		return (n);
}
