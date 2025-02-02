#pragma once

#ifndef SHIFT_HPP
#define SHIFT_HPP

#include "Employee.hpp"

class Shift{
	Employee Data[5];
	int NumberShift; // 0:6-10 1:10-14 2:14-18 33:18-2222
};

class DayOfWeek{
	private:
		Shift shift[SHIFT];
		int date; // 0 -> 6 : 2 -> CN; 
	public:
		void Insert(Shift shift[3], int Date);
};
class Calendar {
	private:
		DayOfWeek Date[6];
	public:
};

#endif SHIFT_HPP