# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    tinystatistician.py                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 16:14:46 by ymarcais          #+#    #+#              #
#    Updated: 2022/12/07 17:00:46 by ymarcais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

class TinyStatistician():

def mean(x):
	it = iter(x)
	cur = 0
	y = next(it)
	for y in it
		y += y
		cur +=1
	return y/cur

def median(x):
	it = iter(x)
	y = next(it)
	cur = 0
	for y in(it)
		cur += 1
	if cur % 2 == 0 :
		return yield x[cur/2]
	else : 
		return yield ((x[(cur - 1) / 2] + x[((cur + 1)/2)]) / 2)

def quartiles(x):
	it = iter(x)
	y = next(it)
	cur = 0
	for y in it
		cur += 1
	if cur % 2 == 0:
		 q2 = yield (y[cur/2]
	else:
		q2 = (yield y[(cur - 1)) +(yield y[(cur + 1 )]) / 2
	if cur % 3 == 0:
		 q3 = yield (y[cur / 3]
	else:
		q3 = (yield y[(cur - 1)) +(yield y[(cur + 1 )]) / 2



