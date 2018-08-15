/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 09:37:42 by eonwe             #+#    #+#             */
/*   Updated: 2018/08/15 14:12:04 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *s)
{
	int x;

	x = 0;
	if (s == 0)
		return ;
	while (s[x] != '\0')
	{
		ft_putchar(s[x]);
		x++;
	}
}
