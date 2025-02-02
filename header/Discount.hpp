#pragma once

#ifndef DISCOUNT_H
#define DISCOUNT_H

#include "Menu.hpp" 
class Discount_Event {
	private:
		Dish MonDuocGiam;
		Date NgayApDung;
		Date NgayKetThuc;
		int Discount;
	public:
		void Insert(Dish MonDuocGiam, Date NgayApDung, Date NgayKetThuc, int Discount);
};

class Date {
	private:
		int DD;
		int MM;
		int YYYY;
	public:
		void Insert(int dd, int mm, int yy);
};

#endif DISCOUNT_H