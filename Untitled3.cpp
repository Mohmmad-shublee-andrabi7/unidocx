#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    float percentage;
    char grade;

  
    cout << "Enter marks for 5 subjects (out of 100):" << endl;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

  
    percentage = (m1 + m2 + m3 + m4 + m5) / 5.0;


    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

  
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
