
#include <iostream>
using namespace std;
int main()
{

        int a[10];
        int distinctArr[10];
        int distinctCount = 0;

        // 读入10个数
        cout << "请输入10个数：" << endl;
        for (int i = 0; i < 10; ++i) {
            cin >> a[i];
        }

        // 找出不同的数并存入新数组
        for (int i = 0; i < 10; ++i) {
            bool isDistinct = true;
            for (int j = 0; j < distinctCount; ++j) {
                if (a[i] == distinctArr[j]) {
                    isDistinct = false; 
                    break;
                }
            }
            if (isDistinct) {
                distinctArr[distinctCount] = a[i];
                ++distinctCount;
            }
        }

        // 输出不同的数
        cout << "不同的数为：" << endl;
        for (int i = 0; i < distinctCount; ++i) {
            cout << distinctArr[i] << " ";
        }

        return 0;
    


}

