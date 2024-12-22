#include <iostream>
using namespace std;
class zhu {
private:int Length;
       int Width;
       int Height;
       int V;
public:void cincode(int l, int w, int h) {
    cout << "length:"; cin >> l;
    cout << "width:"; cin >> w;
    cout << "height:"; cin >>h ;
    Length = l;
    Width = w;
    Height = h;

}
      void  calculate() {
          V = Length * Width * Height;

      }
      void ShowV() {
          cout<<"V=" <<V<< endl;
      }

};
int main()
{
    zhu a;
    zhu b;
    zhu c;
    cout << "请输入三个长方柱的长宽高" << endl;
    a.cincode(0, 0, 0), b.cincode(0, 0, 0), c.cincode(0, 0, 0);
    a.calculate(), b.calculate(), c.calculate();
    a.ShowV();
    b.ShowV();
    c.ShowV();
    return 0;
}

