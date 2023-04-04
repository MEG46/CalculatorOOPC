#include <iostream>
using namespace std;
class Calculator {
private:
	float num1, num2,result;
public:
	void setNum1(float num) {
		num1 = num;
	}
	void setNum2(float num) {
		num2 = num;
	}
	void Sum() {
		result = num1 + num2;
		cout << num1 << " + " << num2 << " = " << result << endl;
	}
	void Subs() {
		result = num1 - num2;
		cout << num1 << " - " << num2 << " = " << result << endl;
	}
	void Mult() {
		result = num1 * num2;
		cout << num1 << " x " << num2 << " = " << result << endl;
	}
	void Divide() {
		if (num2 == 0) {
			cout << "The number can't divided by 0" << endl;
		}
		else {
			result = num1 / num2;
			cout << num1 << " / " << num2 << " = " << result << endl;
		}
	}
	float getResult() {
		return result;
	}
	};
