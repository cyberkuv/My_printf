/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 13:34:46 by eonwe             #+#    #+#             */
/*   Updated: 2018/08/15 08:41:10 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*e;

	i = 0;
	e = (unsigned char *)b;
	while (i < len)
	{
		e[i] = c;
		i++;
	}
	return (e);
}

void		*ft_memalloc(size_t size)
{
	void *store;

	store = malloc(size);
	if (store == 0)
		return (NULL);
	ft_memset(store, 0, size);
	return (store);
}
