/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:07:15 by ymarcais          #+#    #+#             */
/*   Updated: 2022/11/23 15:19:05 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	if (n == 0)
		return (s);
	str = (unsigned char *)s;
	while (n--)
	{
		*str++ = (unsigned char)c;
	}
	return (s);
}

/*#include <string.h>

int main()
{
	const int	size = 20;
	char	b1[20];
	char	b2[20];


	memset(b1, 'A', size);
	ft_memset(b2, 'A', size);

	printf("%s %s\n", b1, b2);


	if (!memcmp(b1, b2, 20))
		printf("test ok\n");
	else
		printf("test fail\n");

}*/