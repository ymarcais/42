/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 07:52:20 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/25 15:21:46 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= ' ' && *str <= '~'))
		{
			return (0);
		}
		*str++;
	}
	return (1);
}
/*
#include <stdio.h>

int     main(void)
{
        char a[] = "'\0'";
        int b;

        b = ft_str_is_upercase(a);
        printf("%d", b);
}*/
