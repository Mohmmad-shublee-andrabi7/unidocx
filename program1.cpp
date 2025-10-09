#include <iostream>
#include <sstream>
#include <string>
using namespace std;
double applyOperation(double a,double b, char op ){
if 	(op=='+') return a+b;
if 	(op=='-') return a-b;
if 	(op=='*') return a*b;
if 	(op=='/') return a/b;
return;
}
int main() {
	string expr;
	cout << "enter an expression (like 5+3.2*2.0): ";
	getline(cin, expr);

