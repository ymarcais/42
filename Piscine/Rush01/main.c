/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:51:45 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/20 16:52:59 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	affichage(char **tab);

int	main()
{
	char *a[5];

	a[0] = "1234";
	a[1] = "5678";
	a[2] = "1234";	
	a[3] = "1234";	
	a[4] = "1234";	
	affichage(a);
}
