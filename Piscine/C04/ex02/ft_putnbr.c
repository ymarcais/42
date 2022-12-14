/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 07:49:21 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/29 08:01:37 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int b)
{
	char	d;
	int		i;
	int		c;
	int		a;

	i = 0;
	c = b;
	a = 1;
	while (c > 10)
	{
		c /= 10;
		a *= 10;
		i++;
	}		
	while (i >= 0)
	{
		c = b / a;
		c %= 10;
		d = c + 48;
		write(1, &d, 1);
		a /= 10;
		i--;
	}
}
/*
void	main(void)
{
	ft_putnbr(1122);
}*/
