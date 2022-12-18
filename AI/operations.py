# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    operations.py                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 18:59:10 by ymarcais          #+#    #+#              #
#    Updated: 2022/12/06 09:47:38 by ymarcais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys

mylist = sys.argv
if not mylist[1].isdigit() or not mylist[2].isdigit():
	print ("error")
	sys.exit
a = int(mylist[1])
b = int (mylist[2])
print("Sum:   ", (a+ b))
print("Difference:", a - b)
print("Product:   " , a * b)
if b != 0:
	print("Quotien:   " , a / b)
	print("Remainer:   ", a % b)
else:
	 print("error")

if len(mylist) == 1:
	print("nothing")
if len(mylist) != 3:
	print ("error")
	sys.exit()

