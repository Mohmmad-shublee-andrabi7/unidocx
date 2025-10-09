#include <iostream>
using namespace std;

int main() {
    float price1, price2, price3;
    int qty1, qty2, qty3;

    cout << "Enter price and quantity of item 1: ";
    cin >> price1 >> qty1;

    cout << "Enter price and quantity of item 2: ";
    cin >> price2 >> qty2;

    cout << "Enter price and quantity of item 3: ";
    cin >> price3 >> qty3;

    float total = (price1 * qty1) + (price2 * qty2) + (price3 * qty3);

    cout << "Total Grocery Bill = $" << total << endl;

    return 0;
}
