/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 09:49:37 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/25 13:32:29 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	countsigne(char *str)
{
	int	i;
	int	t;

	t = 0;
	i = 0;
	while (str[t] != '\0' )
	{
		if (str[t] == 45)
			i++;
		t++;
	}
	return (i);
}

int	len(char *str)
{
	int	le;
	
	le = 0;

	while (str[le])
		le++;
	return (le);
}

#include <stdio.h>
int	ft_atoi(char *str)
{
	int	j;
	int	nombr;
	int	a;
	int	sc;

	j = 0;
	nombr = 0;
	a = len(str);
	sc = countsigne(str);

	while (((str[j] >= '\b' && str[j] <= '\r') || str[j] == 20 || str[j] == 43 || str[j] == 45 || (str[j] >= 48 && str[j] <= 57)) && str[j] != '\0')
	{
		if ((str[j] >= 48 && str[j] <= 57))		
		{
			nombr += str[j] - 48;
			nombr *= 10;
			if ((j + 1) < a)
			
				if (str[j + 1] > 57 || str[j +1] < 48)
				{		
					nombr /= 10;
						if (sc % 2 != 0)
							nombr = nombr * (-1);
							return (nombr);
				}								
		}
		j++;
	}
	if ( sc % 2 != 0)
		nombr *= (-1);
	nombr /= 10;
	return (nombr);
}

#include <stdio.h>

int	main(void)
{
	int	a;
	char	b[] = "--+-+45675bs";

	a = ft_atoi(b);
	printf("%d", a);
}
