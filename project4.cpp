#include <iostream>
using namespace std;

int main() {
    float distance, mileage, fuelPrice;

    cout << "Enter distance (km): ";
    cin >> distance;
    cout << "Enter mileage (km per liter): ";
    cin >> mileage;
    cout << "Enter fuel price (per liter): ";
    cin >> fuelPrice;

    float fuelNeeded = distance / mileage;
    float totalCost = fuelNeeded * fuelPrice;

    cout << "Estimated fuel cost: $" << totalCost;
    return 0;
}
// estimation of fuel cost for a trip 
