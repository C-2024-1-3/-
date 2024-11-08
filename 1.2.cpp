#include <iostream>
using namespace std;
int main()
{
	float v;
	float i = 1.00 / 3;
	int r, h;
	cout << "注意：圆周率Π用k来代替" << endl;
	cout << "请输入圆锥的半径r=" << endl;
	cin >> r;
	cout << "请输入圆锥的高h=" << endl;
	cin >> h;
	v = r * r * h * i;

	cout << "圆锥的体积v=" << v << "k" << endl;
	return 0;
}