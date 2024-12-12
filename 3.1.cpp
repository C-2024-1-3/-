
#include <iostream>
using namespace std;
int CD(double &x, double &y) //CD是公约数缩写
{
	
	double  b;
	

	for (b = max(x, y); (x / b) != int(x / b) || (y / b) != int(y / b);)b--;
	return b;


}
int LCM(double &x, double& y) //LCM是公倍数缩写
{
	
	double a;
	for (a = 1; (a / x) != int(a / x) || (a / y) != int(a / y);)
		a++;
	return a;
	
}
int main()

{
	double m, n;
	cout << "请输入两个正整数："; cin >> m >> n; 
	cout << "最大公约数等于" << CD(m, n) << endl;;
	cout << "最小公倍数等于" << LCM(m, n) << endl;

	

}

