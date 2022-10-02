#include <iostream>
#include "CashRegister.h"

using namespace std;

int main() {
    CashRegister reg1(0.12);
    reg1.add_item(5, false);
    reg1.add_item(6, true);
    reg1.display_all();
}
