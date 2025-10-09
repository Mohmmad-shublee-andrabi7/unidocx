#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a two-digit number (10-99): ";
    cin >> num;

    if (num < 10 || num > 99) {
        cout << "Invalid input";
        return 0;
    }

    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", 
                      "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num >= 10 && num <= 19) {
        cout << teens[num - 10];
    } else {
        cout << tens[num / 10];
        if (num % 10 != 0) cout << " " << ones[num % 10];
    }

    return 0;
}
