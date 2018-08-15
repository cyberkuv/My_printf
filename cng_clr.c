/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cng_clr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 08:32:45 by eonwe             #+#    #+#             */
/*   Updated: 2018/08/15 14:34:46 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_getclr(char *s, int b)
{
	int clr;

	clr = 0;
	if (ft_strcmp("cyan", s) == 0)
		clr = 36;
	else if (ft_strcmp("magenta", s) == 0)
		clr = 35;
	else if (ft_strcmp("blue", s) == 0)
		clr = 34;
	else if (ft_strcmp("yellow", s) == 0)
		clr = 33;
	else if (ft_strcmp("green", s) == 0)
		clr = 32;
	else if (ft_strcmp("red", s) == 0)
		clr = 31;
	else if (ft_strcmp("black", s) == 0)
		clr = 30;
	else
		return (0);
	if (b == 0)
		clr = 0;
	ft_putstr("\033[");
	ft_putnbr(clr);
	ft_putchar('m');
	return (1);
}

static int	ft_color(char *str, int x)
{
	static int	b;
	int			j;
	char		*s;

	if (b == 0 || !b)
		b = 1;
	else if (b == 1)
		b = 0;
	j = x;
	while (str[j] != '}')
		j++;
	s = (char *)ft_memalloc(j + 1);
	ft_strncat(s, &str[x], j - x);
	if (ft_getclr(s, b) == 0)
	{
		free(s);
		x--;
		return (x);
	}
	free(s);
	j++;
	return (j);
}

int			cng_clr(char *str, int i)
{
	if (str[i] == '{')
	{
		i++;
		if (str[i] != '\0')
			i = ft_color((char *)str, i);
		if (str[i] == '\0')
			return (-1);
	}
	return (i);
}
