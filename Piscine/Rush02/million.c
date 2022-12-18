/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   million.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:38:44 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/27 17:49:19 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	cut3(char *str, char **tab)
{
	int	mod;
	int	i;  // track for char in str
	int	size;

	i = 0;
	size = ft_strlen(str) / 3;
	mod = ft_strlen(str) % 3;
	if (mod > 0)
		size ++;
	while (i < 3 - mod)
	{
		tab[0][i] = '0';
		i++;
	}
	i = ft_strlen(str) - 1;
	while (i > -1)
	{
		tab[size - 1][2] = str[i];
		if (i - 1 < 0)
			break ;
		tab[size - 1][1] = str[i - 1];
		if (i - 2 < 0)
			break ;
		tab[size - 1][0] = str[i - 2];
		i -= 3;
		size--;
	}
}

int	main (int argc, char *argv[])
{
	char	*str = argv[1];
	char	**tab = (char**)malloc(sizeof(char*) * (ft_strlen(str) / 3));
	int	i;

	if (argc > 0)
		printf("Hey!\n");

	i = 0;
	while (i < ft_strlen(str) / 3)
	{
		tab[i] = (char*)malloc(sizeof(char) * 3);
		i++;
	}
	if (ft_strlen(str) % 3 != 0)
		tab[i] = (char*)malloc(sizeof(char) * 3);
	cut3(str, tab);

	int	j;
	int	size;

	size = ft_strlen(str) / 3;
	if (ft_strlen(str) % 3 != 0)
		size++;
	j = 0;
	while (j < size)
	{
		printf("%s\n", tab[j]);
		j++;
	}
	return 0;
}

		


