/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_to_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:23:19 by ymarcais          #+#    #+#             */
/*   Updated: 2022/12/04 16:09:43 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	dec_to_hex(args(va_list, long long int))
{
	long long int	dec;
	long long char hex;
	int tmp;
	int i;
	int size;

	dec = args;
	size = dec_size(dec);
	i = 0;
	tmp = 0;
	hex = (char *)malloc(sizeof(char) * size + 1
	dec % 16;
	if (tmp < 10)
	{
		

	
		 
