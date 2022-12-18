/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   marchepas.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:27:31 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/28 17:27:43 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (i + 1 < n)
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int 	main()
{
	char	s1[] = "1235";
	char	s2[] = "1237";
	unsigned int n = 3;
	int	a;

	a = ft_strncmp(s1, s2, n);
	printf("%d", a);
}
