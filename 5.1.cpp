#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:int hour;//数据成员改成私有
	  int minute;
	  int sec;
public:void Cintime(int Hour,int Minute,int Sec) {
	cout << "输入hour:"; cin >> Hour;
	cout << "输入minute:"; cin >> Minute;
	cout << "输入Sec:"; cin >> Sec;
	hour = Hour;
	minute = Minute;
	sec = Sec;
}
	  void Showtime() {
		  cout << hour << ":" << minute << ":" << sec << endl;

	  }
};
int main() {
	
	Time t1;           //定义t1为Time类对象
	t1.Cintime(0,0,0);
	t1.Showtime();
	return 0;
}