#pragma once

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include "Library.h"

class Employee {
	private:
		string MaNV;
		string Ho;
		string Ten;
		int Position; //1: quan ly 2: nhan vien 3:bao ve 4:nhan vien ban thoi gian
		bool Gender; //1 la nam 0 la nu
	public:
		void Insert(string MaNV, string Ho, string Ten, int Position, bool GenderGender);
};

class List_Employee {
	private:
		int Soluong;
		Employee employee[MAX];
	public:
		void Sort();

};

#endif EMPLOYEE_HPP