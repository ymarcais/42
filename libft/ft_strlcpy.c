/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:11:55 by ymarcais          #+#    #+#             */
/*   Updated: 2022/12/02 18:17:49 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lsrc;

	i = 0;
	//if (!src || !dst)
	//	return (0);
	lsrc = ft_strlen((char *)src);
	if (!size)
		return (lsrc);
	while (i < size - 1 && src[i] !='\0')
	{
		dst[i] = ((char *)src)[i];
		i++;
	}
	if (size < lsrc)
		dst[size - 1] = '\0';
	else if (size != 0)
		dst[i] = '\0';
	return (lsrc);
}

/*size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lsrc;

	i = 0;
	lsrc = ft_strlen((char *)src);
	if (!size)
		return (lsrc);
	while (src[i] != '\0' && i < size)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	if (size < lsrc)
		dst[size - 1] = '\0';
	else if (size != 0)
		((char *)dst)[i] = '\0';
	return (lsrc);
}*/
