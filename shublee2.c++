#include <iostream>

int main() {
    double income, tax = 0.0;
    
    std::cout << "Enter your annual income: ";
    std::cin >> income;
    
    if (income <= 250000) {
        tax = 0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = (250000 * 0.05) + (income - 500000) * 0.10;
    } else {
        tax = (250000 * 0.05) + (500000 * 0.10) + (income - 1000000) * 0.30;
    }

    std::cout << "Taxable Income: " << income << std::endl;
    std::cout << "Calculated Tax: " << tax << std::endl;

    return 0;
}
