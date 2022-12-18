# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    prediction.py                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 16:07:55 by ymarcais          #+#    #+#              #
#    Updated: 2022/12/13 16:42:21 by ymarcais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import numpy as np

def predict_(x, theta):
	m = x.shape[0]
	x = np.reshape(x, (m, 1))
	v1 = [1] * m
	v1 = np.reshape(v1, (m, 1))
	xp = np.concatenate((v1, x), axis = 1)
	y_hat = np.dot(xp, theta)
	return y_hat 

x = np.arange(1,6)
theta = np.array([[5], [0]])
print(predict_(x, theta))
