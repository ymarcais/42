# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    vec_loss.py                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 11:32:10 by ymarcais          #+#    #+#              #
#    Updated: 2022/12/14 16:55:04 by ymarcais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import numpy as np

def loss_(y, y_hat):
	m = y.shape[0]
	t = (y - y_hat).reshape(1, m)
	loss = (1 / (2 * m)) * np.dot(t, (y - y_hat))
	return loss 

x = np.array([[0], [15], [-9], [7], [12], [3], [-21]])
y = np.array([[2], [14], [-13], [5], [12], [4], [-19]])

print(loss_(x, y))
