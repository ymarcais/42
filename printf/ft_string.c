/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:31:59 by ymarcais          #+#    #+#             */
/*   Updated: 2022/12/03 14:58:18 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

void	ft_string(va_arg(args, char), int fd)
{
	char	*str2;
	int		i;

	i = 0;
	str2 = va_arg(args, char);
	while (str2[i] != '\0')
		write(fd, &str2[i++],1);
}
}
