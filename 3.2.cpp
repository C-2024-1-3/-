

#include <iostream>
using namespace std;
bool is_prime(int num){

	double x;
	if (num == 2) { return true; }
	else {
		for (x = num - 1; double(num / x) != int(num / x);) {
			x--;
			if (x == 1) { return true; }
		}
		return false;
	}
}
int main()
{
	int a = 0;
	int b = 0;
	for (int y = 0; y <= 200; y++) {
		
		
		
		
		if (is_prime(y)) {
			cout << y << '\t'; b++;
			
			if (b%10 == 0) cout << endl;
			
		}
	}



}

