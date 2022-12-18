# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    TinyStatistician.py                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 13:17:22 by ymarcais          #+#    #+#              #
#    Updated: 2022/12/12 15:15:42 by ymarcais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

class TinyStatistician:

	def mean(self, x):
		j = 0
		b = 0
		for i in x:
			b += i
			j += 1
		return b/j 

	def median(self, x):
		size = len(x)
		x.sort()
		if size % 2 == 0:
			return (x[int(size / 2)] + x[int((size / 2) - 1)]) / 2
		#med =  x[size/2]
		return x[int((size - 1)/2)]

	def percentile(self, x, p):
		size = len(x)
		n = round((p / size))
		total = 0
		i = 0
		while i < n:
			total = total + x[i]
			i += 1
		return total
 
a = [1, 42, 300,10, 59]
print(TinyStatistician().percentile(a, 10))


