
#include <iostream>
using namespace std;
void count(const char s[], int counts[]) {
    int j = 0;
    for (; s[j]!='\0'; j++)
    {
        for (int k = 0,a = 'a',A = 'A'; k <= 25; ) {
            if ((int)s[j] == a || (int)s[j] == A)
            {
                counts[k]++;
                k = 26;

            }
            else { a++; k++; A++; }
        };

    };
    
}
int main() {
    char c[1000];
    cout << "请输入一个字符串: ";
    cin.getline(c, 1000);

    int counts[26] = { 0 };
    count(c, counts);

    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            char letter = static_cast<char>('a' + i);
            cout << letter << ": " << counts[i] << " times" << endl;
        }
    }

    return 0;
}
