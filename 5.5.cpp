
#include <iostream>
using namespace std;
class Point {
private:int x;
       int y;
public:Point(int X=0, int Y=0) {
    x = X; y = Y;
}
      void setpoint(int i,int j) {
          x = x + i; 
          y = y + i;

      }
      void display() {
          cout << "(" << x << "," << y << ")" << endl;
      }


};
int main()
{
    Point p1(60, 80);
    p1.setpoint(20, 20);
    p1.display();
    return 0;
}
