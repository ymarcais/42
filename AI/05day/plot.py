# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    plot.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 16:54:42 by ymarcais          #+#    #+#              #
#    Updated: 2022/12/14 17:48:31 by ymarcais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import matplotlib.pyplot as plt
import numpy as np
from vec_loss import loss_

def plot(x, y, theta):
	plt.plot(x, y, 'o', color='blue')
	plt.plot(theta[0] + theta[1] * x, color = 'red')
	plt.show() 


def plot_with_loss(x, y, theta):
	plt.plot(x, y, 'o', color='blue')
	plt.plot(x, theta[0] + theta[1] * x, color = 'red')
	y_hat = theta[0] + theta[1] * x
	plt.plot((x, x), (y, y_hat), dashes=[4, 4], color = 'red')
	loss = loss_(y, y_hat)
	
	plt.title(f'Cost: {loss[0]}', fontdict=None, loc='center', pad=None, color = "black" )
	plt.show() 

#x = np.arange(1,6)
#y = np.array([3.74013816, 3.61473236, 4.57655287, 4.66793434, 5.95585554])

#theta = np.array([[4.5],[-0.2]])
#plot(x, y, theta)

x = np.arange(1,6)
y = np.array([11.52434424, 10.62589482, 13.14755699, 18.60682298, 14.14329568])

theta = np.array([18,-1])
plot_with_loss(x, y, theta)
