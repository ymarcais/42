/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:02:33 by ymarcais          #+#    #+#             */
/*   Updated: 2022/12/03 15:28:34 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_pointer(args(va_list(args, long long int ), int fd))
{
		long long int	j;
		char	charj;

		j = &args;
		charj = ft_itoa(j);
		ft_putstr_fd(charj, 1);
}
}
