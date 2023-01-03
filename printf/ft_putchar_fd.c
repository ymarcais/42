/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:52:00 by ymarcais          #+#    #+#             */
/*   Updated: 2022/12/03 14:31:52 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(va_arg(args, char), int fd)
{
	char	c;
	
	c = va_arg(args, char)
	 if (fd < 0)
		return ;
	write(fd, &c, 1);
}
