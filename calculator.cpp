// calculator
#include <iostream>
#include <string>
using namespace std;

double calculator(double x, double y, char action) {
	
	switch (action) {
	case '+':
		return x + y;
		break;
	case '-':
		return x - y;
		break;
	case '*':
		return x * y;
		break;
	case '/':
		if (y != 0) {
			return x / y;
		}
		else {
			cout << "Division by 0 exception" << endl;
		 }
		break;
	default:
		return 0.0;
	}
}
int main()
{
	for (int i = 0;; i++) {
	double x;
	double y;
	char action;
	string exit;
	cout << "vvedite x=";
	cin >>  x;
	cout << "vvedite y=";
	cin >> y;
	cout << "vvedite operathiu(+,-,*,/):";
	cin >> action;
	cout << calculator(x, y, action)<<endl;
	/*cout << "exit from calculator";
	cin >> exit;
	if (exit=='yes')*/
	}
}
