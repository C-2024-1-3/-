
#include <iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "请输入x="; cin >> x;
	cout << "请输入y="; cin >> y;
	double a,b ;
	for (a = 1; (a / x) != int(a / x) || (a / y) != int(a/ y);) 
		a++;

	for (b = max(x, y); (x / b) != int(x / b) || (y / b) != int(y / b);)b--;
	cout << "x和y的最大公约数为" << b << endl;
	cout << "x和y的最小公倍数为" << a << endl;
	return 0;
}

