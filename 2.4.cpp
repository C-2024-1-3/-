
#include <iostream>
using namespace std;
int calculate(char c,double a,double b) {
   
    switch (c) {
    case'+':return a + b; break;
    case'-':return a - b; break;
    case'*':return a * b; break;
    case'/':if (b == 0) { cout << "报错" << endl; break; }
           else { return a / b; }break;
    
    
    
    case'%':if ((int)a == a && (int)b == b)
        return int(a) % int(b);
        break;
    }

}
int main()
{
    int x, y; char z;
    cout << "请输入第一个数："; cin >> x;
    cout << "请输入运算符："; cin >> z;
    cout << "请输入第二个数:"; cin >> y;
  
    double i = calculate(z, x, y);
    cout << "结果等于" <<i<<endl;
    return 0;
}

