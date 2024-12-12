#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char *s1, const char *s2) {
    int s1Len = strlen(s1);
    int s2Len = strlen(s2);

    for (int i = 0; i <= s2Len - s1Len; ++i) {
        int j;
        for (j = 0; j < s1Len; ++j) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == s1Len) {
            return i;
        }
    }

    return -1;
}


int main()
{
    int i = 0;
    char a, b[30], d[50];
    cout << "输入第一个字符串：";
    while ((a = cin.get()) != '\n') {
        b[i] = a; i++;
        if (i >= 29)break;

    }
    b[i] = '\0';
    int k = 0;
    cout << "输入第二个字符串：";
    while ((a = cin.get()) != '\n') {
        d[k] = a; k++;
        if (k >= 49)break;

    }
    d[k] = '\0';
    cout << indexOf(b, d);

}
