# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    NumPyCreator.py                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 09:42:02 by ymarcais          #+#    #+#              #
#    Updated: 2022/12/08 17:58:37 by ymarcais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import numpy as np
import random

class	NumPyCreator:
	
	def	from_lst(self, lst):
		return np.array(lst)

	def	from_tuple(self, tpl):
		return np.array(tpl)

	def from_iterable(self, itr):
		return np.array(itr)

	def from_shape(self, shape, value):
		arr=np.empty(shape)
		arr.fill(value)
		return(arr)
		return np.full(shape, value)

	def random(self, shape):
		arr=np.empty(shape)
		for i in range(shape[0]):
			for j in range(shape[1]):
				arr[i][j]=np.random.randint(0, 9)
		return arr
		return np.random.randint(0, 9, shape)

	def identity(self, n):
		return np.identity(n)

tpl = (3, 4)
myClass = NumPyCreator()

print(myClass.random(tpl))

