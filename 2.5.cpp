
#include <iostream>

using namespace std;
int main()
{
    char c;
    int x=0, y=0, z=0, w=0;
    while ((c = cin.get()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            x++;
        }
        else {
            if (c >= '0' && c <= '9') {
                z++;
            }
            else {
                if (c == ' ') {
                    y++;

                }
                else {
                    w++;
                }
            }

        }
    }
    cout << "英文字母有" << x << "个" << endl;
    cout << "空格有" << y << "个" << endl;
    cout << "数字字符有" << z << "个" << endl;
    cout << "其他字符有" << w << "个" << endl;
    return 0;
    

}