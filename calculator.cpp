// calculator
#include <iostream>
#include <string>

using namespace std;

string calculator(double x, double y, char action) {

	switch (action) {
	case '+':
		return to_string (x + y);
		break;
	case '-':
		return to_string(x - y);
		break;
	case '*':
		return to_string(x * y);
		break;
	case '/':
		if (y != 0) {
			return to_string(x / y);
		}
		else {
			return "error";
		}
		break;
	default:
		return "error";
	}
}
int main()
{
	for (int i = 0;; i++) {
		double x;
		double y;
		char action;
		string exit;
		cin >> x >> action >> y;
		cout << calculator(x, y, action) << endl;
		cout << "exit from calculator(yes/no):";
		cin >> exit;
		if (exit == "yes") {
			return 0;
		}
	}
}
