#include <iostream>
using namespace std;
int main() {
    int a = 5;
    float b = 3.2f;
    double c = 2.0, d = 11.4;
    
    double result = (double)a + ((double )b * c) - d;
    
    cout << "exression: 5 + 3.2 * 2.0 - 11.4" << endl;
    cout << "result after type promotion = " << result << endl;
    
	return 0;
}
