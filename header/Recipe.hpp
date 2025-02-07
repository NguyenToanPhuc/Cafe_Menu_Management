#pragma once
#ifndef RECIPE_HPP
#define RECIPE_HPP
#include "Library.h"
class Ingredient {
	private:
		string key;
		string name;
		int Amount;
		bool Unit; //1 la g 0 la ml
	public:
		Ingredient() {}s;
		Ingredient(const string _key, const string _name, const int _Amount, const bool _Unit);
};

class RecipeNode {
	private:
		Ingredient data;
		RecipeNode* next;
	
	public:
		RecipeNode(const Ingredient _data);

		friend class Recipe;
};

class Recipe {
	private:
		RecipeNode* head;
	public:
		Recipe();
		bool Empty() const;
		void AddFront(const Ingredient data);
		void RemoveFront();
		~Recipe();
};

#endif RECIPE_HPP;
