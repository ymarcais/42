/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:21:41 by ymarcais          #+#    #+#             */
/*   Updated: 2022/12/04 13:26:10 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putnbr_base(int n, char *base, int lenbase)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
			ft_putnbr_base(n, base, lenbase);
		}
		else if (n < lenbase)
		{
			c = base[n];
			write (fd, &c, 1);
		}
		else
		{
			ft_putnbr_base(n / lenbase, base, lenbase);
			c = base[n % 10];
			write(fd, &c, 1);
		}
	}
}
