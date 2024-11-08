
#include <iostream>
using namespace std;
int main()
{
	double x, y;
goon:cout << "请输入x="; cin >> x;
	if (0<x&&x<1) {
		y = 3 - (2 * x);
	}
	else {
		if (1<=x&&x<5) {
			y = (2 / (4.00 * x)) + 1;

		}
		else {
			if (5 <= x&& x< 10) {
				y = x*x;
			}
			else {
				cout << "换一个x试试" << endl;;
				goto goon;
			}
		}

	}
	cout << "y="<<y << endl;
	goto goon;
	return 0;
}


