/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:22:52 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/20 17:35:04 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	affichage(t_board board)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < board.max)
	{
		while (j < board.max)
		{
             		ft_putchar(board.testing_board[i][j]);
					if (j < board.max)
				{
					ft_putchar(' ' );
				}
			j++;
		}
		i++;
		j = 0;
		ft_putchar('\n');
	}
}
