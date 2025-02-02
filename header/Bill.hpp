#pragma once

#ifndef BILL_HPP
#define BILL_HPP

#include "Library.h"

class Node_Bill_Detail {
	private:
		string MAMON;
		int Number;
		int Price;
		float VAT;
	public:
		void Insert(string MAMON, int Number, float VAT);
};
class List_Bill_Detail{
	private:
		Node_Bill_Detail data_cthd;
		List_Bill_Detail *next;
	public:
		void Insert(Node_Bill_Detail data_cthd, List_Bill_Detail* next);
};
typedef List_Bill_Detail* ptr_LBD;
class Node_Bill {
	private:
		string MAHD;
		int Table;
		bool Type;
		ptr_LBD firstCTHD = nullptr;
	public:
		void Insert(string MAHD, int Table, bool Type, ptr_LBD firstCTHD);
};

class List_Bill{
	Node_Bill data_hd;
	List_Bill *next;
};

#endif BILL_HPP