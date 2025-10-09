

#include <iostream>
#include <string>
#include <limits> 

using namespace std;

int main() {
    int x;
    float y;
    double z;
    
    char op_char;
    char var1_char, var2_char; 

    
    cout << "Enter three numbers (int, float, double):\n";
    if (!(cin >> x >> y >> z)) {
        cerr << "Error reading input numbers.\n";
        return 1;
    }
    
    
    double val_x = (double)x;
    double val_y = (double)y;
    double val_z = z;
    
    double operand1 = 0.0;
    double operand2 = 0.0;

    

    
    cout << "\nChoose the first variable (x, y, or z): ";
    if (!(cin >> var1_char)) return 1;
    
   
    switch (tolower(var1_char)) {
        case 'x': operand1 = val_x; break;
        case 'y': operand1 = val_y; break;
        case 'z': operand1 = val_z; break;
        default: 
            cerr << "Invalid first variable choice: " << var1_char << "\n";
            return 1;
    }

  
    cout << "Choose an operator (+, -, *, /): ";
    if (!(cin >> op_char)) return 1;

   
    cout << "Choose the second variable (x, y, or z): ";
    if (!(cin >> var2_char)) return 1;

   
    switch (tolower(var2_char)) {
        case 'x': operand2 = val_x; break;
        case 'y': operand2 = val_y; break;
        case 'z': operand2 = val_z; break;
        default: 
            cerr << "Invalid second variable choice: " << var2_char << "\n";
            return 1;
    }
    
   
    
    double result = 0.0;

    switch (op_char) {
        case '+':
            result = operand1 + operand2;
            break;

        case '-':
            result = operand1 - operand2;
            break;

        case '*':
            result = operand1 * operand2;
            break;

        case '/':
            if (operand2 == 0.0) {
                cerr << "Error: Cannot divide by zero.\n";
                return 1;
            }
            result = operand1 / operand2;
            break;

        default:
            cerr << "Error: Invalid operator choice " << op_char << ".\n";
            return 1;
    }
    
    
    cout << "\nResult: " << var1_char << " " << op_char << " " << var2_char << " = " << result << "\n";

    return 0;
}
