/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:15:25 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/20 15:15:27 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c);

void  error(char *e)
{
	int	i;

	i = 0;
	while( i < 6)
	{
		ft_putchar(e[i]);
		i++;
	}
}

int	main()
{
	char e[] = "Error";
	error(e);
	return(0);
}
