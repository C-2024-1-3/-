
#include <iostream>
using namespace std;
int main()
{
	
	int x = 2,y,z=0,m=0;
	for (; x <= 100; x = y) {
		
		y = 2 * x;
		if (y > 100)break;
		m += x;
		z++;
	}
	double b,c;
	b = 0.8 * m;
	c = b / z;
	
	cout << c << endl;
	return 0;

}
