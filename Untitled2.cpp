#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

  
    if (n <= 0) {
        cout << "Number of elements should be positive." << endl;
        return 1;
    }

    double num, sum = 0;
    double smallest, largest;

    cout << "Enter " << n << " numbers:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> num;
        sum += num;

        if (i == 0) {
            smallest = largest = num; 
        } else {
            if (num < smallest) smallest = num;
            if (num > largest) largest = num;
        }
    }

    double average = sum / n;

    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;
    cout << "Average: " << average << endl;

    return 0;
}
