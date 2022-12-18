# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    book.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 10:31:12 by ymarcais          #+#    #+#              #
#    Updated: 2022/12/06 17:57:18 by ymarcais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import datetime
from recipe import Recipe

class Book:
	str name:
	datetime.last_update:
	datetime.creation_date:
	dict recipes_list = {"starter": [],"lunch":[],"dessert":[]}

def get_recipe_by_name(self, name):
	print(recipe.Recipe(name))

def get_recipes_by_types(self, recipe_type):
	print(self.recipe_list[recipe_type])
	for one_recipe in self.recipe_list[recipe_type]:
		print(one_recipe.name)
	

def add_recipe(self, recipe):
	if isinstance(recipe, Recipe) != True
		print("error")
	if "starter" is recipe.recipe_type:
		recipes_list["starter"].append(recipe)
	if "lunch" is recipe.recipie_type
		recipes_list["lunch"].append(recipe)
	if "dessert" is recipe.recipe
		recipes_list["dessert"].append(recipe)
