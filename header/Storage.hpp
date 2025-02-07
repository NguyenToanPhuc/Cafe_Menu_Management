#pragma once

#ifndef STORAGE_HPP
#define STORAGE_HPP

#include "Recipe.hpp"

class HangTrongKho {
	private:
		Ingredient Data;
		int ammount;
		int height;
		HangTrongKho* left, * right;
	public:
		void Insert(Ingredient Data);
};

#endif STORAGE_HPP