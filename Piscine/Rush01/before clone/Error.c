/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newstring.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:18:00 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/21 12:54:31 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	newstring(char	*str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[count] != '\0')
	{
	count++;
	}
	while (i < count -1)
	{
		if (!(str[i] >= '0' && str[i] <= '9')
			&& !(str[count - 1] >= '0' && str[count - 1] <= '9'))
		{
			if (str[i + 1] != 20)
			{
				write(1, "Error", 5);
				return (1);
			}
		}
		i++;
	}
}
/*
char    main()
{

        char    b[] = "1  0 1 0 1 ";

        newstring(b);
}
*/
