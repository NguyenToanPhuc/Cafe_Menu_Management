#pragma once

#ifndef MENU_HPP
#define MENU_HPP

#include "Recipe.hpp"   
class  Dish {
	private:
		string MAMON;
		string name;
		int price;
		Recipe nguyenLieu;
	public:
		void Insert(string MAMON, string name, int price,  Recipe nguyenLieu);
};
class  List_Dish {
	private:
		Dish data_dish;
		int height;
		List_Dish* left, *right;
	public:
		void Insert(Dish data_dish);
};
typedef List_Dish* Menu;

#endif MENU_HPP