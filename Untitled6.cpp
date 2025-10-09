#include <iostream>
using namespace std;

int main() {
    int month, year, days;

    cout << "Enter month number (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    if (month == 2) {
       
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            days = 29;
        else
            days = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month >= 1 && month <= 12) {
        days = 31;
    } else {
        cout << "Invalid month number entered." << endl;
        return 0;
    }

    cout << "Number of days: " << days << endl;

}

