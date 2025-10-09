#include <iostream>
using namespace std;

int main() {
    int daysLate;
    cout << "Enter number of days late: ";
    cin >> daysLate;

    float fine;
    if (daysLate <= 5)
        fine = daysLate * 1;
    else if (daysLate <= 10)
        fine = 5 * 1 + (daysLate - 5) * 2;
    else
        fine = 5 * 1 + 5 * 2 + (daysLate - 10) * 5;

    cout << "Total fine: $" << fine;
    return 0;
}
// fine based on book deposit overdue 
