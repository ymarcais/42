/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:22:52 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/20 16:38:21 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	affichage(char **tab)
{
	int i;
	int j;
	int x;	

	i = 0;
	j = 0;

	while (tab[i])
	{
		while (tab[i][j] != '\0')
		{
               		ft_putchar(tab[i][j]);
			if (tab[i][j + 1 ] != '\0 )
				ft_putchar(' ' );
			j++;
		}
		i++;
		j = 0;
		ft_putchar('\n');
	}
}
