/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:49:15 by ymarcais          #+#    #+#             */
/*   Updated: 2022/12/04 11:17:21 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_digit(args(va_list(args, long long int), int fd))
{
	char	*cnb;
	long long i;

	i = args;
	cnb = ft_itoa(i);
	ft_putstr_fd(cnb, 1);
}
