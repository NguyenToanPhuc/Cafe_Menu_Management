#pragma once
#ifndef RECIPE_HPP
#define RECIPE_HPP
#include "Library.h"
class Ingredient {
private:
	string name;
	int Amount;
	bool Unit; //1 la g 0 la ml
public:
	Ingredient();
	Ingredient(string name_, int Amount_, bool Unit_);
	void Insert(string name_, int Amount_, bool Unit_);
};
typedef Recipe* PTR_RECIPE;
class RecipeNode {
	Ingredient data;
	Recipe* next;

	RecipeNode();
	PTR_RECIPE New_Node(Ingredient data_);
	void Insert_Head(Ingredient data_, PTR_RECIPE first);
};
class Recipe {
private:
	Recipe

};
#endif RECIPE_HPP
