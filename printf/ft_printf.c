/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:26:59 by ymarcais          #+#    #+#             */
/*   Updated: 2022/12/03 14:29:18 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int	len;

	va_start (args, str);
	len = ft_strlen(*str);;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] = '%')
		{
			i++;
		else
			write (1, &str[i], 1);
	}
}
