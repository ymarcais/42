/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:59:40 by ymarcais          #+#    #+#             */
/*   Updated: 2022/12/02 17:49:34 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	cur;


	if (!len)
		return (ft_strdup("\0"));
	if (!s)
		return (NULL);
	if (start > ft_strlen((char *)s))
	{
		str = (char *)malloc(sizeof(char) * 1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (ft_strlen((char *)s) < start + len)
		len = ft_strlen((char *)s) - start;
	str = (char *)malloc((sizeof(char) * (len + 1)));
	if (str == NULL)
		return (NULL);
	cur = 0;
	while (cur < len)
	{
		str[cur] =((char *)s)[start + cur];
		cur++;
	}
	str[cur] = '\0';
	return (str);
}
