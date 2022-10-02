#pragma once
#ifndef CASH_REGISTER_H
#define CASH_REGISTER_H

#include <vector>

using namespace std;

class CashRegister {
public:
    CashRegister(double rate);
    void clear();
    void add_item(double cost, bool taxable);
    double get_total();
    int get_count();
    double get_tax() const;
    void display_all();
private:
    double total_tax;
    double tax_rate;
    vector<double> prices;
};

#endif
