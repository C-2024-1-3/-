
#include <iostream>
using namespace std;

int main()
{
	double a;
	goon: cout << "输入一个正整数a:"; cin >> a;
	if (a < 0) {
		cout << "负数求不了"; goto goon;
	}
	else {
		double x1 = a / 2.0, x2;
		x2 = (1 / 2.0) * (x1 + (a / x1));
		while (x1 - x2 > 1e-5) {
			x1 = x2;
			x2 = (1 / 2.0) * (x1 + (a / x1));


		}
		cout << x2 << endl;

	}

	return 0;
}

