#include <iostream>
#include <vector>
#include "CashRegister.h"

using namespace std;

CashRegister::CashRegister(double rate) {
	tax_rate = rate;
	total_tax = 0;
}
void CashRegister::clear() {
	prices.clear();
}
void CashRegister::add_item(double cost, bool taxable) {
	if (taxable) {
		prices.push_back((cost * tax_rate) + cost);
	}
	else {
		prices.push_back(cost);
	}
	total_tax += (cost * tax_rate);
}
double CashRegister::get_total() {
	double total = 0;
	for (int i = 0; i < prices.size(); i++) {
		total += prices.at(i);
	}
	return total;
}
int CashRegister::get_count() {
	return prices.size();
}
double CashRegister::get_tax() const {
	return total_tax;
}
void CashRegister::display_all() {
	for (int i = 0; i < prices.size(); i++) {
		cout << "Item" << i + 1 << ": $" << prices.at(i) << endl;
	}
	cout << "\nTotal: $" << get_total() << endl;
}

