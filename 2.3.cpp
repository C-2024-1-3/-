
#include <iostream>
using namespace std;

int main()
{
	int x, y, z,C;
	goon:cout << "请输入三角形的三边长x="; cin >> x;
	cout << "y="; cin >> y;
	cout << "z="; cin >> z;
	if ((x + y) > z && (x + z > y) && (y + z > x)) {
		C = x + y + z;
		cout <<"三角形的周长C="<< C << endl;
	}
	else {
		cout << "这也组不成个三角形啊老弟，再试一次吧" << endl;
		goto goon;

	}
	if (x == y || y == z || z == x) {
		cout << "这是个等腰三角形" << endl;

	}
	else { cout << "这不是个等腰三角形" << endl; 
	}
	return 0;
}

