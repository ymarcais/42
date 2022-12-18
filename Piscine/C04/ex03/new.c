/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:36:44 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/26 13:17:23 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	nb = 0;
	sign = 0;
	while ((str[i] > 8 && str[i] < 14) && str[i] != '\0')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] i == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb += str[i] - 48;
		nb *= 10;
		i++;
	}
	nb /= 10;
	if (sign % 2 != 0)
		nb *= -1;
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	char	b[] = "--+--+45675";

	a = ft_atoi(b);
	printf("%d", a);
}*/
