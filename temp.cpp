#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double temp;
    char unit;
    
    
    cout << "Enter value and unit (e.g., 25 C): ";
    if (!(cin >> temp >> unit)) return 1;

    
    unit = toupper(unit);

    
    cout << fixed << setprecision(2);
    
    if (unit == 'C') {
        cout << "Fahrenheit: " << temp * 9.0 / 5.0 + 32.0 << " F\n";
        cout << "Kelvin:     " << temp + 273.15 << " K\n";
    } 
    else if (unit == 'F') {
        double c = (temp - 32.0) * 5.0 / 9.0;
        cout << "Celsius: " << c << " C\n";
        cout << "Kelvin:  " << c + 273.15 << " K\n";
    } 
    else if (unit == 'K') {
        double c = temp - 273.15;
        cout << "Celsius:    " << c << " C\n";
        cout << "Fahrenheit: " << c * 9.0 / 5.0 + 32.0 << " F\n";
    } 
    else {
        cerr << "Error: Invalid unit. Use C, F, or K.\n";
        return 1;
    }

    return 0;
}
