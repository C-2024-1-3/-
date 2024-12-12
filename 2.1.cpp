
#include <iostream>
using namespace std;
int main()
{
	char k;
	cout << "请输入一个字符："; cin >> k;
	int x = int(k),y=x-32;
	if (x > 90) {
		cout << char(y);
	}
	else {
		cout << x+1 << endl;
	}
	return 0;
	
}





