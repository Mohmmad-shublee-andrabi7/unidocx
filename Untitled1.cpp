#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        cout << "Number is zero" << endl;
    }
    else if (n > 0 && n % 2 == 0) {
        cout << "Number is positive even: " << n << endl;
    }
    else if (n > 0 && n % 2 != 0) {
        cout << "Number is positive odd: " << n << endl;
    }
    else if (n < 0 && n % 2 == 0) {
        cout << "Number is negative even: " << n << endl;
    }
    else if (n < 0 && n % 2 != 0) {
        cout << "Number is negative odd: " << n << endl;
    }

    return 0;
}
