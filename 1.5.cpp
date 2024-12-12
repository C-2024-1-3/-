
#include <iostream>
using namespace std;
int main()
{
	int c, f;
	cout << "输入华氏温度f="; cin >> f;
	c = ((5 / 9.0 * (f - 32)) + 0.5);
	cout << "摄氏温度c=" << c << endl;
	return 0;

}

